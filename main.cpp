#include "time1.h"
#include "list1.h"
#include <iostream>
#include <locale>


using namespace std;

int main()
{
	setlocale(LC_ALL, "Rus");
	srand(time(0));
	int list_size = 0, value = 0; //переменные размера Списка и вводимых данных
	int flag = 1, c;

	///////////////////////////////////////////////////////ЗАДАНИЕ №1

	cout << "Вас приветствует программа 2-ой лабораторной по ТП!" << endl;
	cout << "Задание №1 - Унарные операции (односвязанный список)\nВведите размер Списка: ";
	cin >> list_size;
	while (list_size < 0)
	{
		cout << "Ошибка" << endl;
		cin >> list_size;
	}
	system("cls");

	List st;
	cout << "Введите данные в список: " << endl;
	for (int i = 0; i < list_size; i++)
	{
		st.push(rand() % 10 + 10);
	}
	system("cls");

	while (flag == 1)
	{
		cout << "Выберите, какие операции провести со списоком:" << endl;
		cout << "1 - Добавление нового элемента в список" << endl;
		cout << "2 - Вывод списка" << endl;
		cout << "3 - Префиксный оператор ++ добавление в начало" << endl;
		cout << "4 - Префиксный оператор -- удаление первого" << endl;
		cout << "5 - Постфиксный оператор -- удаление последнего" << endl;
		cout << "6 - Постфиксный оператор ++ добавление элемента в конец списка" << endl;
		cout << "0 - Переход ко втрому заданию работы" << endl;
		cout << "--> ";
		c = -1;
		while(c < 0 || c>6)
		{
			cin >> c;
		
			cout << "Ошибка ввода!" << endl;
		}
		switch (c)
		{
		case 1: //1 - Добавление нового элемента в список
			system("cls");
			cout << "Введите значение: " << endl;
			cin >> value;
			st.push(value);
			cout << "Значение добавлено в список\n " << endl;
			break;
		
		case 2: //2 - Вывод Списка на экран
			if (!st)
			{
				cout << "Список пуст, выводить нечего.\n" << endl;
				break;
			}
			else
			{
				system("cls");
				st.print();
				cout << "\n";
			}
			break;
		case 3: //3 - Префиксный оператор ++ Добавление в начало
			if (!st)
			{
				cout << "Список пуст, невозможно провести операцию.\n" << endl;
				break;
			}
			else
			{
				system("cls");
				++st;
				cout << "Операция прошла успешно! Получившийся список: " << endl;
				st.print();
				cout << "\n";
			}
			break;
		case 4: //4 - Постфиксный оператор ++ (увеличение всех элементов на минимальный)
			if (!st)
			{
				cout << "Список пуст, невозможно провести операцию.\n" << endl;
				break;
			}
			else
			{
				system("cls");
				--st;
				cout << "Операция прошла успешно! Получившийся список: " << endl;
				st.print();
				cout << "\n";
			}
			break;
		case 5: //5 - Префиксный оператор -- (уменьшение всех элементов на максимальный)
			if (!st)
			{
				cout << "Список пуст, невозможно провести операцию.\n" << endl;
				break;
			}
			else
			{
				system("cls");
				st--;
				cout << "Операция прошла успешно! Получившийся список: " << endl;
				st.print();
				cout << "\n";
			}
			break;
		case 6: //6 - Постфиксный оператор ++ (Добавление в конец)
			if (!st)
			{
				cout << "Список пуст, невозможно провести операцию.\n" << endl;
				break;
			}
			else
			{
				system("cls");
				st++;			
				cout << "Операция прошла успешно! Получившийся список: " << endl;
				st.print();
				cout << "\n";
			}
			break;
		case 0: //0 - Выход
			cout << "\n";
			flag = 0;
			break;
		default:
			cout << "\n";
			flag = 0;
			break;
		}
	}

	/////////////////////////////////////////////////////////ЗАДАНИЕ №2
	system("cls");


	time1 TT, GG, res;
	hour h1;
	minn m1;
	sec s1;
	h1.val = 0;
	m1.val = 0;
	s1.val = 0;
	TT.set_hour(h1.val);
	TT.set_min(m1.val);
	TT.set_sec(s1.val);
	cout << "Задание №2 - Бинарные операторы\n" << endl;
	flag = 1;
	int x, y, z, h, k, l,q,w,e;
	while (flag == 1)
	{
		l = 0;
		k = 0;
		h = 0;
		q = 0;
		w = 0;
		e = 0;
		y = 0;
		cout << "Выберите, какие операции провести с классом вещественных чисел:" << endl;
		cout << "1 - Ввести время" << endl;
		cout << "2 - Вывести время" << endl;
		cout << "3 - Добавление к одному из параметров" << endl;
		cout << "4 - Вычетание из параметра" << endl;
		cout << "5 - Умножение" << endl;
		cout << "6 - Деление" << endl;
		cout << "0 - Выход" << endl;
		cout << "--> ";
		cin >> c;
		while (c < 0 || c>6)
		{
			cout << "Ошибка" << endl;
			cin >> c;
		}
		k = -1;
		switch (c)
		{
		case 1: //1 - Сложение
			system("cls");
			cout << "Введите часы: " << endl;
			cin >> x;
			while (x < 0)
			{
				cout << "Ошибка" << endl;
				cin >> x;
			}
			TT.set_hour(x);
			cout << "Введите минуты: " << endl;
			cin >> y;
			while (y < 0)
			{
				cout << "Ошибка" << endl;
				cin >> y;
			}
			TT.set_min(y);
			cout << "Введите секунды: " << endl;
			cin >> z;
			while (z < 0)
			{
				cout << "Ошибка" << endl;
				cin >> z;
			}
			TT.set_sec(z);
			h = 0;
			e = 0;
			h1.val = 0;
			m1.val = 0;
			s1.val = 0;
			h = TT.get_sec();

			if (h > 59)
			{
				e = h;
				h = h / 60;
				e = e - h * 60;
				m1.val = m1.val + h;
				TT = TT + m1;
				TT.set_sec(e);

			}
			h = TT.get_min();
			if (h > 59)
			{
				e = h;
				h = h / 60;
				e = e - h * 60;
				h1.val = h1.val + h;
				TT = TT + h1;
				TT.set_min(e);
			}
			TT.print_time();
			break;
		case 2: //2 - Вывод
			system("cls");
			TT.print_time();

			break;
		case 3: //3 - + к часу
			system("cls");
			cout << "К какому параметру добавить? " << endl;
			cout << "1. Часы" << endl;
			cout << "2. Минуты" << endl;
			cout << "3. Секунды" << endl;
			cin >> k;
			while (k < 1 || k>3)
			{
				cout << "Ошибка ввода!" << endl;
				cin >> k;
			}
			if (k == 1)
			{
				cout << "Введите  число: " << endl;
				cin >> h1.val;
				while (h1.val < 0)
				{
					cout << "Ошибка" << endl;
					cout << "Введите  число: " << endl;
					cin >> h1.val;
				}

				TT = TT + h1;

			}
			if (k == 2)
			{
				cout << "Введите  число: " << endl;
				cin >> m1.val;
				while (m1.val < 0)
				{
					cout << "Ошибка" << endl;
					cout << "Введите  число: " << endl;
					cin >> m1.val;
				}
				TT = TT + m1;
				h = TT.get_min();
				l = TT.get_min();
				if (h > 59)
				{

					h = h / 60;
					l = l - h * 60;
					h1.val += h;
					TT = TT + h1;
					h1.val = 0;
					TT.set_min(l);
				}
			}
			if (k == 3)
			{
				cout << "Введите  число: " << endl;
				cin >> s1.val;
				while (s1.val < 0)
				{
					cout << "Ошибка" << endl;
					cout << "Введите  число: " << endl;
					cin >> s1.val;
				}
				TT = TT + s1;

				h = TT.get_sec();
				l = TT.get_sec();

				if (h > 59)
				{
					m1.val = 0;
					h = h / 60;
					l = l - h * 60;
					m1.val += h;
					TT = TT + m1;
					TT.set_sec(l);
					m1.val = 0;
					q = TT.get_min();
					w = TT.get_min();

					if (w > 59)
					{
						q = q / 60;
						w = w - q * 60;
						h1.val += q;
						TT = TT + h1;
						h1.val = 0;
						TT.set_min(w);
					}


				}

			}
			h1.val = 0;
			m1.val = 0;
			s1.val = 0;
			TT.print_time();
			break;
		case 4: //Вычетание
			system("cls");
			h = 0;
			l = 0;
			h1.val = 0;
			m1.val = 0;
			s1.val = 0;
			cout << "У какого параметра убрать? " << endl;
			cout << "1. Часы" << endl;
			cout << "2. Минуты" << endl;
			cout << "3. Секунды" << endl;
			cin >> k;
			while (k < 1 || k>3)
			{
				cout << "Ошибка ввода!" << endl;
				cin >> k;
			}
			if (k == 1)
			{
				cout << "Введите  число: " << endl;
				cin >> h1.val;
				while (h1.val < 0)
				{
					cout << "Ошибка" << endl;
					cout << "Введите  число: " << endl;
					cin >> h1.val;
				}
				h = TT.get_hour();
				if (h1.val <= h)
					TT = TT - h1;
				else
					cout << "нельзя" << endl;

			}
			if (k == 2)
			{
				x = 0;
				cout << "Введите  число: " << endl;
				cin >> m1.val;
				h = TT.get_min();
				while (m1.val < 0)
				{
					cout << "Ошибка" << endl;
					cout << "Введите  число: " << endl;
					cin >> m1.val;
				}

				x = TT.get_hour() * 60;
				y = x + h;
				y = y - m1.val;
				if (y < 0)
				{
					cout << "WRONG!" << endl;

				}
				else
				{
					x = y / 60;
					y = y - x * 60;
					TT.set_hour(x);
					TT.set_min(y);
				}
			}


	
			if (k == 3)
			{
				s1.val = 0;
				cout << "Введите  число: " << endl;
				cin >> s1.val;
				h = TT.get_sec();
				while (s1.val < 0)
				{
					cout << "Ошибка" << endl;
					cout << "Введите  число: " << endl;
					cin >> s1.val;
				}
				x = TT.get_hour();
				y = TT.get_min();
				e = (x * 3600 + y * 60 + h) - s1.val;
				if (e < 0)
				{
					cout << "WRONG!" << endl;
				}
				else
				{
					x = e / 3600;
					e = e - x * 3600;
					y = e / 60;
					h = e - y * 60;
					TT.set_sec(h);
					TT.set_min(y);
					TT.set_hour(x);
				}				
			}
			TT.print_time();
			break;

		case 5: 
			system("cls");
			cout << "Введите число: " << endl;
			cin >> x;
			while (x < 0)
			{
				cout << "Ошибка" << endl;
				cout << "Введите число: " << endl;
				cin >> x;
			}
			TT = TT * x;
			h = 0;
			e = 0;
			h1.val = 0;
			m1.val = 0;
			s1.val = 0;
			h = TT.get_sec();

			if (h > 59)
			{
				e = h;
				h = h / 60;		
				e = e - h * 60;
				m1.val = m1.val + h;
				TT = TT + m1;
				TT.set_sec(e);
				
			}
			h = TT.get_min();
			if (h > 59)
			{
				e = h;
				h = h / 60;
				e = e - h * 60;
				h1.val = h1.val + h;
				TT = TT + h1;
				TT.set_min(e);
			}

			break;
		case 6: 
			system("cls");
			cout << "Введите число: " << endl;
			cin >> x;
			while (x < 0)
			{
				cout << "Ошибка" << endl;
				cout << "Введите число: " << endl;
				cin >> x;
			}
			TT = TT / x;
			TT.print_time();
			break;
		case 0: //0 - Выход
			cout << "\n";
			flag = 0;
			break;
		default:
			cout << "\n";
			flag = 0;
			break;
		}
	}

	return 0;
}
