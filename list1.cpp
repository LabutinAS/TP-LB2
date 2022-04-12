#include "list1.h"
#include <iostream>
#include <locale>

using namespace std;

/* КОНСТРУКТОРЫ */

List::List() : top(0), size(0) {} //конструктор без параметров (исп. список инициализации)

List::List(int size_st) : top(0)//конструктор с параметром, задает размер и инициализирует элемент
{
	this->size = size_st; //вызванному объекту устанавливаем размер
}

List::~List()
{
	if ((top == 0) || (size == 0))
	{
		delete top; //удаляем вершину
		size = 0; //размер нулевой
	}
	else
	{
		while (top->next != 0) //пока не дойдем до нулевого указателя
		{
			Unit* temp = top; //временная переменная юнита, присваиваем ей значение вершины
			top = temp->next; //теперь вершина указывает на следующий за ней элемент,
			delete temp; //а временную - удаляеям
		}
		delete top; //удаляем вершину
		size = 0; //размер нулевой
	}
}

List::List(const List& List_copy) : size(List_copy.size)
{
	int* buff = new int[List_copy.size]; //вводим буферный массив, в котором будем хранить наши числа нового списка
	Unit* el_list = List_copy.top; //новая переменная-вершина будущего списка

	for (int i = 0; i <= List_copy.size - 1; i++)
	{	//пока счетчик не дойдет до конца списка
		buff[i] = el_list->data; //заносим в массив значения из списка
		el_list = el_list->next; //ставим указатель на следующий элемент списка
	}

	for (int i = 0; i < List_copy.size; i++)
		this->push(buff[i]); //вносим в новый список значения из массива

	delete[] buff; //удаляем буфер
}




/* МЕТОДЫ КЛАССА СПИСКА */

void List::push(int value)
{

	Unit* new_unit = new Unit;           //При каждом вызове выделяется память
	new_unit->data = value;                            //Записываем x в элемент структуры  element (в x структуры element)
	new_unit->next = top;                      //Указываем, что след. элемент это объект по адресу Head
	top = new_unit;
	size++;
}


int List::pop()
{
	setlocale(LC_ALL, "Rus");

	if (!this)
	{
		cout << "Стек пуст, удалять нечего." << endl;
	}

	Unit* temp = top; //временная переменная-вершина 
	int deldata = 0; //место под удаленный элемент

	deldata = top->data; //присваиваем значение удаляемого элемента
	top = top->next; //вершина теперь тот юнит, который был под вершиной
	delete temp; //удаляем переменную-вершину
	size--;
	return deldata; //вернули удаленный элемент
}


void List::print()
{
	if (size == 0)
	{
		cout << "Стек пуст, выводить нечего." << endl;
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
 //Добавление в начало префикс ++
List& List::operator ++()
{
	Unit* tmp = top;
	int value;
	if (size == 0)
	{
		cout << "Стек пуст, невозможно провести операцию!" << endl;
	}

	int len = size; //переменная размера вызванного объекта
	int* buff = new int[len+1]; //буферный массив, куда занесем значения списка
	for (int i = 0; i < len; i++)
		buff[i] = this->pop();
	cout << "Введите значение элемента" << endl;
	cin >> value;
	buff[len] = value;
	for (int i = len ; i >= 0; i--)
		this->push(buff[i]); //в обратном порядке (как было до преобразования) заносим новые значения в список

	delete[] buff;
	return *this; //возвращаем сам объект, который вызвал фугкцию
}


//оператор постфиксного инк как метод для добавления в конец
List& List::operator ++(int)
{	
	if (size == 0)
	{
		cout << "Стек пуст, невозможно провести операцию!" << endl;
	}
	Unit* new_unit = new Unit; //инициализируем новый юнит списка и выделяем под него память
	new_unit->next = top; //теперь новый юнит стал вершиной
	top = new_unit; //и вершина указывает на новый юнит
	int value;
	cout << "Введите значение элемента" << endl;
	cin >> value;
	top->data = value; //вносим значение в вершину
	size++;

	return *this;
}

//Префикс -- (удаление первого)
void operator-- (List& St)
{
	setlocale(LC_ALL, "Rus");
	Unit* tmp = St.top;
	if (St.size == 0)
	{
		cout << "Стек пуст, невозможно провести операцию!" << endl;
	}

	//временная переменная-вершина 
	int deldata = 0; //место под удаленный элемент

	int len = St.size; //переменная размера вызванного объекта
	int* buff = new int[len]; //буферный массив, куда занесем значения списка
	for (int i = 0; i < len; i++)
		buff[i] = St.pop(); //вносим в массив значения списка, список на время становится пустым
	for (int i = len - 2; i >= 0; i--)
		St.push(buff[i]); //в обратном порядке (как было до преобразования) заносим новые значения в список
	delete[] buff;
	
}

//Постфиксной -- (Удаление последнего)
void operator --(List& St, int){
	setlocale(LC_ALL, "Rus");
	Unit* tmp = St.top;
	if (St.size == 0)
			{
				cout << "Стек пуст, невозможно провести операцию!" << endl;
			}
	
	 //временная переменная-вершина 
	int deldata = 0; //место под удаленный элемент

	int len = St.size; //переменная размера вызванного объекта
	int* buff = new int[len]; //буферный массив, куда занесем значения списка
	for (int i = 0; i < len; i++)
		buff[i] = St.pop(); //вносим в массив значения списка, список на время становится пустым
	for (int i = len - 1; i >= 1; i--)
		St.push(buff[i]); //в обратном порядке (как было до преобразования) заносим новые значения в список
	delete[] buff;
	
}