#include "time1.h"
#include "list1.h"
#include <iostream>
#include <locale>


using namespace std;

int main()
{
	setlocale(LC_ALL, "Rus");
	srand(time(0));
	int list_size = 0, value = 0; //���������� ������� ������ � �������� ������
	int flag = 1, c;

	///////////////////////////////////////////////////////������� �1

	cout << "��� ������������ ��������� 2-�� ������������ �� ��!" << endl;
	cout << "������� �1 - ������� �������� (������������� ������)\n������� ������ ������: ";
	cin >> list_size;
	while (list_size < 0)
	{
		cout << "������" << endl;
		cin >> list_size;
	}
	system("cls");

	List st;
	cout << "������� ������ � ������: " << endl;
	for (int i = 0; i < list_size; i++)
	{
		st.push(rand() % 10 + 10);
	}
	system("cls");

	while (flag == 1)
	{
		cout << "��������, ����� �������� �������� �� ��������:" << endl;
		cout << "1 - ���������� ������ �������� � ������" << endl;
		cout << "2 - ����� ������" << endl;
		cout << "3 - ���������� �������� ++ ���������� � ������" << endl;
		cout << "4 - ���������� �������� -- �������� �������" << endl;
		cout << "5 - ����������� �������� -- �������� ����������" << endl;
		cout << "6 - ����������� �������� ++ ���������� �������� � ����� ������" << endl;
		cout << "0 - ������� �� ������ ������� ������" << endl;
		cout << "--> ";
		c = -1;
		while(c < 0 || c>6)
		{
			cin >> c;
		
			cout << "������ �����!" << endl;
		}
		switch (c)
		{
		case 1: //1 - ���������� ������ �������� � ������
			system("cls");
			cout << "������� ��������: " << endl;
			cin >> value;
			st.push(value);
			cout << "�������� ��������� � ������\n " << endl;
			break;
		
		case 2: //2 - ����� ������ �� �����
			if (!st)
			{
				cout << "������ ����, �������� ������.\n" << endl;
				break;
			}
			else
			{
				system("cls");
				st.print();
				cout << "\n";
			}
			break;
		case 3: //3 - ���������� �������� ++ ���������� � ������
			if (!st)
			{
				cout << "������ ����, ���������� �������� ��������.\n" << endl;
				break;
			}
			else
			{
				system("cls");
				++st;
				cout << "�������� ������ �������! ������������ ������: " << endl;
				st.print();
				cout << "\n";
			}
			break;
		case 4: //4 - ����������� �������� ++ (���������� ���� ��������� �� �����������)
			if (!st)
			{
				cout << "������ ����, ���������� �������� ��������.\n" << endl;
				break;
			}
			else
			{
				system("cls");
				--st;
				cout << "�������� ������ �������! ������������ ������: " << endl;
				st.print();
				cout << "\n";
			}
			break;
		case 5: //5 - ���������� �������� -- (���������� ���� ��������� �� ������������)
			if (!st)
			{
				cout << "������ ����, ���������� �������� ��������.\n" << endl;
				break;
			}
			else
			{
				system("cls");
				st--;
				cout << "�������� ������ �������! ������������ ������: " << endl;
				st.print();
				cout << "\n";
			}
			break;
		case 6: //6 - ����������� �������� ++ (���������� � �����)
			if (!st)
			{
				cout << "������ ����, ���������� �������� ��������.\n" << endl;
				break;
			}
			else
			{
				system("cls");
				st++;			
				cout << "�������� ������ �������! ������������ ������: " << endl;
				st.print();
				cout << "\n";
			}
			break;
		case 0: //0 - �����
			cout << "\n";
			flag = 0;
			break;
		default:
			cout << "\n";
			flag = 0;
			break;
		}
	}

	/////////////////////////////////////////////////////////������� �2
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
	cout << "������� �2 - �������� ���������\n" << endl;
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
		cout << "��������, ����� �������� �������� � ������� ������������ �����:" << endl;
		cout << "1 - ������ �����" << endl;
		cout << "2 - ������� �����" << endl;
		cout << "3 - ���������� � ������ �� ����������" << endl;
		cout << "4 - ��������� �� ���������" << endl;
		cout << "5 - ���������" << endl;
		cout << "6 - �������" << endl;
		cout << "0 - �����" << endl;
		cout << "--> ";
		cin >> c;
		while (c < 0 || c>6)
		{
			cout << "������" << endl;
			cin >> c;
		}
		k = -1;
		switch (c)
		{
		case 1: //1 - ��������
			system("cls");
			cout << "������� ����: " << endl;
			cin >> x;
			while (x < 0)
			{
				cout << "������" << endl;
				cin >> x;
			}
			TT.set_hour(x);
			cout << "������� ������: " << endl;
			cin >> y;
			while (y < 0)
			{
				cout << "������" << endl;
				cin >> y;
			}
			TT.set_min(y);
			cout << "������� �������: " << endl;
			cin >> z;
			while (z < 0)
			{
				cout << "������" << endl;
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
		case 2: //2 - �����
			system("cls");
			TT.print_time();

			break;
		case 3: //3 - + � ����
			system("cls");
			cout << "� ������ ��������� ��������? " << endl;
			cout << "1. ����" << endl;
			cout << "2. ������" << endl;
			cout << "3. �������" << endl;
			cin >> k;
			while (k < 1 || k>3)
			{
				cout << "������ �����!" << endl;
				cin >> k;
			}
			if (k == 1)
			{
				cout << "�������  �����: " << endl;
				cin >> h1.val;
				while (h1.val < 0)
				{
					cout << "������" << endl;
					cout << "�������  �����: " << endl;
					cin >> h1.val;
				}

				TT = TT + h1;

			}
			if (k == 2)
			{
				cout << "�������  �����: " << endl;
				cin >> m1.val;
				while (m1.val < 0)
				{
					cout << "������" << endl;
					cout << "�������  �����: " << endl;
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
				cout << "�������  �����: " << endl;
				cin >> s1.val;
				while (s1.val < 0)
				{
					cout << "������" << endl;
					cout << "�������  �����: " << endl;
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
		case 4: //���������
			system("cls");
			h = 0;
			l = 0;
			h1.val = 0;
			m1.val = 0;
			s1.val = 0;
			cout << "� ������ ��������� ������? " << endl;
			cout << "1. ����" << endl;
			cout << "2. ������" << endl;
			cout << "3. �������" << endl;
			cin >> k;
			while (k < 1 || k>3)
			{
				cout << "������ �����!" << endl;
				cin >> k;
			}
			if (k == 1)
			{
				cout << "�������  �����: " << endl;
				cin >> h1.val;
				while (h1.val < 0)
				{
					cout << "������" << endl;
					cout << "�������  �����: " << endl;
					cin >> h1.val;
				}
				h = TT.get_hour();
				if (h1.val <= h)
					TT = TT - h1;
				else
					cout << "������" << endl;

			}
			if (k == 2)
			{
				x = 0;
				cout << "�������  �����: " << endl;
				cin >> m1.val;
				h = TT.get_min();
				while (m1.val < 0)
				{
					cout << "������" << endl;
					cout << "�������  �����: " << endl;
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
				cout << "�������  �����: " << endl;
				cin >> s1.val;
				h = TT.get_sec();
				while (s1.val < 0)
				{
					cout << "������" << endl;
					cout << "�������  �����: " << endl;
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
			cout << "������� �����: " << endl;
			cin >> x;
			while (x < 0)
			{
				cout << "������" << endl;
				cout << "������� �����: " << endl;
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
			cout << "������� �����: " << endl;
			cin >> x;
			while (x < 0)
			{
				cout << "������" << endl;
				cout << "������� �����: " << endl;
				cin >> x;
			}
			TT = TT / x;
			TT.print_time();
			break;
		case 0: //0 - �����
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
