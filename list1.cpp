#include "list1.h"
#include <iostream>
#include <locale>

using namespace std;

/* ������������ */

List::List() : top(0), size(0) {} //����������� ��� ���������� (���. ������ �������������)

List::List(int size_st) : top(0)//����������� � ����������, ������ ������ � �������������� �������
{
	this->size = size_st; //���������� ������� ������������� ������
}

List::~List()
{
	if ((top == 0) || (size == 0))
	{
		delete top; //������� �������
		size = 0; //������ �������
	}
	else
	{
		while (top->next != 0) //���� �� ������ �� �������� ���������
		{
			Unit* temp = top; //��������� ���������� �����, ����������� �� �������� �������
			top = temp->next; //������ ������� ��������� �� ��������� �� ��� �������,
			delete temp; //� ��������� - ��������
		}
		delete top; //������� �������
		size = 0; //������ �������
	}
}

List::List(const List& List_copy) : size(List_copy.size)
{
	int* buff = new int[List_copy.size]; //������ �������� ������, � ������� ����� ������� ���� ����� ������ ������
	Unit* el_list = List_copy.top; //����� ����������-������� �������� ������

	for (int i = 0; i <= List_copy.size - 1; i++)
	{	//���� ������� �� ������ �� ����� ������
		buff[i] = el_list->data; //������� � ������ �������� �� ������
		el_list = el_list->next; //������ ��������� �� ��������� ������� ������
	}

	for (int i = 0; i < List_copy.size; i++)
		this->push(buff[i]); //������ � ����� ������ �������� �� �������

	delete[] buff; //������� �����
}




/* ������ ������ ������ */

void List::push(int value)
{

	Unit* new_unit = new Unit;           //��� ������ ������ ���������� ������
	new_unit->data = value;                            //���������� x � ������� ���������  element (� x ��������� element)
	new_unit->next = top;                      //���������, ��� ����. ������� ��� ������ �� ������ Head
	top = new_unit;
	size++;
}


int List::pop()
{
	setlocale(LC_ALL, "Rus");

	if (!this)
	{
		cout << "���� ����, ������� ������." << endl;
	}

	Unit* temp = top; //��������� ����������-������� 
	int deldata = 0; //����� ��� ��������� �������

	deldata = top->data; //����������� �������� ���������� ��������
	top = top->next; //������� ������ ��� ����, ������� ��� ��� ��������
	delete temp; //������� ����������-�������
	size--;
	return deldata; //������� ��������� �������
}


void List::print()
{
	if (size == 0)
	{
		cout << "���� ����, �������� ������." << endl;
	}
	else
	{
		Unit* temp = top;
		while (temp->next != nullptr)
		{
			cout << temp->data << " <-- ";
			temp = temp->next;
		}

		cout << temp->data << endl;
	}

}

Unit* List::get_top()
{
	return top;
}

int List::get_size() const
{
	return size;
}

void List::set_size(int& value)
{
	size = value;
	
}

bool List::operator! () const
{
	if (size == 0)
	{
		return true;
	}
	else
	{
		return false;
	}
}
 //���������� � ������ ������� ++
List& List::operator ++()
{
	Unit* tmp = top;
	int value;
	if (size == 0)
	{
		cout << "���� ����, ���������� �������� ��������!" << endl;
	}

	int len = size; //���������� ������� ���������� �������
	int* buff = new int[len+1]; //�������� ������, ���� ������� �������� ������
	for (int i = 0; i < len; i++)
		buff[i] = this->pop();
	cout << "������� �������� ��������" << endl;
	cin >> value;
	buff[len] = value;
	for (int i = len ; i >= 0; i--)
		this->push(buff[i]); //� �������� ������� (��� ���� �� ��������������) ������� ����� �������� � ������

	delete[] buff;
	return *this; //���������� ��� ������, ������� ������ �������
}


//�������� ������������ ��� ��� ����� ��� ���������� � �����
List& List::operator ++(int)
{	
	if (size == 0)
	{
		cout << "���� ����, ���������� �������� ��������!" << endl;
	}
	Unit* new_unit = new Unit; //�������������� ����� ���� ������ � �������� ��� ���� ������
	new_unit->next = top; //������ ����� ���� ���� ��������
	top = new_unit; //� ������� ��������� �� ����� ����
	int value;
	cout << "������� �������� ��������" << endl;
	cin >> value;
	top->data = value; //������ �������� � �������
	size++;

	return *this;
}

//������� -- (�������� �������)
void operator-- (List& St)
{
	setlocale(LC_ALL, "Rus");
	Unit* tmp = St.top;
	if (St.size == 0)
	{
		cout << "���� ����, ���������� �������� ��������!" << endl;
	}

	//��������� ����������-������� 
	int deldata = 0; //����� ��� ��������� �������

	int len = St.size; //���������� ������� ���������� �������
	int* buff = new int[len]; //�������� ������, ���� ������� �������� ������
	for (int i = 0; i < len; i++)
		buff[i] = St.pop(); //������ � ������ �������� ������, ������ �� ����� ���������� ������
	for (int i = len - 2; i >= 0; i--)
		St.push(buff[i]); //� �������� ������� (��� ���� �� ��������������) ������� ����� �������� � ������
	delete[] buff;
	
}

//����������� -- (�������� ����������)
void operator --(List& St, int){
	setlocale(LC_ALL, "Rus");
	Unit* tmp = St.top;
	if (St.size == 0)
			{
				cout << "���� ����, ���������� �������� ��������!" << endl;
			}
	
	 //��������� ����������-������� 
	int deldata = 0; //����� ��� ��������� �������

	int len = St.size; //���������� ������� ���������� �������
	int* buff = new int[len]; //�������� ������, ���� ������� �������� ������
	for (int i = 0; i < len; i++)
		buff[i] = St.pop(); //������ � ������ �������� ������, ������ �� ����� ���������� ������
	for (int i = len - 1; i >= 1; i--)
		St.push(buff[i]); //� �������� ������� (��� ���� �� ��������������) ������� ����� �������� � ������
	delete[] buff;
	
}