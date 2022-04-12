#pragma once
#include <iostream>
typedef struct Unit
{
	int data;
	Unit* next;
} Unit; //������� �����

//Unit* top; //������� ����� 

class List
{
private:
	Unit* top = 0; //��������� �� ��������� ������� ����� - ������������������ �������
	int size = 0; //������ �����
public:
	List();
	explicit List(int size_st);
	~List();
	List(const List& List_copy);

	//������� �����
	void push(int value); //���������� �������� � ����
	int pop(); //���������� �������
	void print(); //����� ����� �� �����

	//������� � �������
	Unit* get_top(); //����� ������� �����
	void set_size(int& value); //��������� �������� � ����
	int get_size() const; //����� ������ �����

	//������������� ���������
	bool operator! () const; //�������� �� �������
	List& operator ++(); //���������� ����� ��� ���������� � ������
	List& operator ++(int); //����������� ����� ��� ���������� � �����
	friend void operator --(List& St); //���������� �����
	friend void operator --(List& St, int);
};

