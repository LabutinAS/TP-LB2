#pragma once
#include <iostream>
typedef struct Unit
{
	int data;
	Unit* next;
} Unit; //элемент стека

//Unit* top; //вершина стека 

class List
{
private:
	Unit* top = 0; //указатель на начальный элемент стека - инициализированный элемент
	int size = 0; //размер стека
public:
	List();
	explicit List(int size_st);
	~List();
	List(const List& List_copy);

	//функции стека
	void push(int value); //добавление элемента в стек
	int pop(); //извлечение вершины
	void print(); //вывод стека на экран

	//геттеры и сеттеры
	Unit* get_top(); //взять элемент стека
	void set_size(int& value); //поместить значение в стек
	int get_size() const; //взять размер стека

	//перегруженные операторы
	bool operator! () const; //проверка на пустоту
	List& operator ++(); //префиксная форма для добавление в начало
	List& operator ++(int); //постфиксная форма для добавления в конец
	friend void operator --(List& St); //префиксная форма
	friend void operator --(List& St, int);
};

