#pragma once
#include <iostream>
typedef struct Unit
{
	int data;
	Unit* next;
} Unit; //элемент списка

//Unit* top; //вершина списка 

class List
{
private:
	Unit* top = 0; //указатель на начальный элемент списка - инициализированный элемент
	int size = 0; //размер списка
public:
	List();
	explicit List(int size_st);
	~List();
	List(const List& List_copy);

	//функции стека
	void push(int value); //добавление элемента в список
	int pop(); //извлечение вершины
	void print(); //вывод списка на экран

	//геттеры и сеттеры
	Unit* get_top(); //взять элемент списка
	void set_size(int& value); //поместить значение в список
	int get_size() const; //взять размер списка

	//перегруженные операторы
	bool operator! () const; //проверка на пустоту
	List& operator ++(); //префиксная форма для добавление в начало
	List& operator ++(int); //постфиксная форма для добавления в конец
	friend void operator --(List& St); //префиксная форма
	friend void operator --(List& St, int);
};

