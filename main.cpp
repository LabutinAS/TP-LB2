#include "time1.h"
#include "list1.h"
#include <iostream>
#include <locale>


using namespace std;

int main()
{
	setlocale(LC_ALL, "Rus");
	srand(time(0));
	int list_size = 0, value = 0; //ïåðåìåííûå ðàçìåðà Ñïèñêà è ââîäèìûõ äàííûõ
	int flag = 1, c;

	///////////////////////////////////////////////////////ÇÀÄÀÍÈÅ ¹1

	cout << "Âàñ ïðèâåòñòâóåò ïðîãðàììà 2-îé ëàáîðàòîðíîé ïî ÒÏ!" << endl;
	cout << "Çàäàíèå ¹1 - Óíàðíûå îïåðàöèè (îäíîñâÿçàííûé ñïèñîê)\nÂâåäèòå ðàçìåð Ñïèñêà: ";
	cin >> list_size;
	while (list_size < 0)
	{
		cout << "Îøèáêà" << endl;
		cin >> list_size;
	}
	system("cls");

	List st;
	cout << "Ââåäèòå äàííûå â ñïèñîê: " << endl;
	for (int i = 0; i < list_size; i++)
	{
		st.push(rand() % 10 + 10);
	}
	system("cls");

	while (flag == 1)
	{
		cout << "Âûáåðèòå, êàêèå îïåðàöèè ïðîâåñòè ñî ñïèñîêîì:" << endl;
		cout << "1 - Äîáàâëåíèå íîâîãî ýëåìåíòà â ñïèñîê" << endl;
		cout << "2 - Âûâîä ñïèñêà" << endl;
		cout << "3 - Ïðåôèêñíûé îïåðàòîð ++ äîáàâëåíèå â íà÷àëî" << endl;
		cout << "4 - Ïðåôèêñíûé îïåðàòîð -- óäàëåíèå ïåðâîãî" << endl;
		cout << "5 - Ïîñòôèêñíûé îïåðàòîð -- óäàëåíèå ïîñëåäíåãî" << endl;
		cout << "6 - Ïîñòôèêñíûé îïåðàòîð ++ äîáàâëåíèå ýëåìåíòà â êîíåö ñïèñêà" << endl;
		cout << "0 - Ïåðåõîä êî âòðîìó çàäàíèþ ðàáîòû" << endl;
		cout << "--> ";
		c = -1;
		while(c < 0 || c>6)
		{
			cin >> c;
		
			cout << "Îøèáêà ââîäà!" << endl;
		}
		switch (c)
		{
		case 1: //1 - Äîáàâëåíèå íîâîãî ýëåìåíòà â ñïèñîê
			system("cls");
			cout << "Ââåäèòå çíà÷åíèå: " << endl;
			cin >> value;
			st.push(value);
			cout << "Çíà÷åíèå äîáàâëåíî â ñïèñîê\n " << endl;
			break;
		
		case 2: //2 - Âûâîä Ñïèñêà íà ýêðàí
			if (!st)
			{
				cout << "Ñïèñîê ïóñò, âûâîäèòü íå÷åãî.\n" << endl;
				break;
			}
			else
			{
				system("cls");
				st.print();
				cout << "\n";
			}
			break;
		case 3: //3 - Ïðåôèêñíûé îïåðàòîð ++ Äîáàâëåíèå â íà÷àëî
			if (!st)
			{
				cout << "Ñïèñîê ïóñò, íåâîçìîæíî ïðîâåñòè îïåðàöèþ.\n" << endl;
				break;
			}
			else
			{
				system("cls");
				++st;
				cout << "Îïåðàöèÿ ïðîøëà óñïåøíî! Ïîëó÷èâøèéñÿ ñïèñîê: " << endl;
				st.print();
				cout << "\n";
			}
			break;
		case 4: //4 - Ïîñòôèêñíûé îïåðàòîð ++ (óâåëè÷åíèå âñåõ ýëåìåíòîâ íà ìèíèìàëüíûé)
			if (!st)
			{
				cout << "Ñïèñîê ïóñò, íåâîçìîæíî ïðîâåñòè îïåðàöèþ.\n" << endl;
				break;
			}
			else
			{
				system("cls");
				--st;
				cout << "Îïåðàöèÿ ïðîøëà óñïåøíî! Ïîëó÷èâøèéñÿ ñïèñîê: " << endl;
				st.print();
				cout << "\n";
			}
			break;
		case 5: //5 - Ïðåôèêñíûé îïåðàòîð -- (óìåíüøåíèå âñåõ ýëåìåíòîâ íà ìàêñèìàëüíûé)
			if (!st)
			{
				cout << "Ñïèñîê ïóñò, íåâîçìîæíî ïðîâåñòè îïåðàöèþ.\n" << endl;
				break;
			}
			else
			{
				system("cls");
				st--;
				cout << "Îïåðàöèÿ ïðîøëà óñïåøíî! Ïîëó÷èâøèéñÿ ñïèñîê: " << endl;
				st.print();
				cout << "\n";
			}
			break;
		case 6: //6 - Ïîñòôèêñíûé îïåðàòîð ++ (Äîáàâëåíèå â êîíåö)
			if (!st)
			{
				cout << "Ñïèñîê ïóñò, íåâîçìîæíî ïðîâåñòè îïåðàöèþ.\n" << endl;
				break;
			}
			else
			{
				system("cls");
				st++;			
				cout << "Îïåðàöèÿ ïðîøëà óñïåøíî! Ïîëó÷èâøèéñÿ ñïèñîê: " << endl;
				st.print();
				cout << "\n";
			}
			break;
		case 0: //0 - Âûõîä
			cout << "\n";
			flag = 0;
			break;
		default:
			cout << "\n";
			flag = 0;
			break;
		}
	}

	/////////////////////////////////////////////////////////ÇÀÄÀÍÈÅ ¹2
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
	cout << "Çàäàíèå ¹2 - Áèíàðíûå îïåðàòîðû\n" << endl;
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
		cout << "Âûáåðèòå, êàêèå îïåðàöèè ïðîâåñòè ñ êëàññîì âåùåñòâåííûõ ÷èñåë:" << endl;
		cout << "1 - Ââåñòè âðåìÿ" << endl;
		cout << "2 - Âûâåñòè âðåìÿ" << endl;
		cout << "3 - Äîáàâëåíèå ê îäíîìó èç ïàðàìåòðîâ" << endl;
		cout << "4 - Âû÷åòàíèå èç ïàðàìåòðà" << endl;
		cout << "5 - Óìíîæåíèå" << endl;
		cout << "6 - Äåëåíèå" << endl;
		cout << "0 - Âûõîä" << endl;
		cout << "--> ";
		cin >> c;
		while (c < 0 || c>6)
		{
			cout << "Îøèáêà" << endl;
			cin >> c;
		}
		k = -1;
		switch (c)
		{
		case 1: //1 - Ñëîæåíèå
			system("cls");
			cout << "Ââåäèòå ÷àñû: " << endl;
			cin >> x;
			while (x < 0)
			{
				cout << "Îøèáêà" << endl;
				cin >> x;
			}
			TT.set_hour(x);
			cout << "Ââåäèòå ìèíóòû: " << endl;
			cin >> y;
			while (y < 0)
			{
				cout << "Îøèáêà" << endl;
				cin >> y;
			}
			TT.set_min(y);
			cout << "Ââåäèòå ñåêóíäû: " << endl;
			cin >> z;
			while (z < 0)
			{
				cout << "Îøèáêà" << endl;
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
		case 2: //2 - Âûâîä
			system("cls");
			TT.print_time();

			break;
		case 3: //3 - + ê ÷àñó
			system("cls");
			cout << "Ê êàêîìó ïàðàìåòðó äîáàâèòü? " << endl;
			cout << "1. ×àñû" << endl;
			cout << "2. Ìèíóòû" << endl;
			cout << "3. Ñåêóíäû" << endl;
			cin >> k;
			while (k < 1 || k>3)
			{
				cout << "Îøèáêà ââîäà!" << endl;
				cin >> k;
			}
			if (k == 1)
			{
				cout << "Ââåäèòå  ÷èñëî: " << endl;
				cin >> h1.val;
				while (h1.val < 0)
				{
					cout << "Îøèáêà" << endl;
					cout << "Ââåäèòå  ÷èñëî: " << endl;
					cin >> h1.val;
				}
				
				TT = TT + h1;
				
			}
			if (k == 2)
			{
				cout << "Ââåäèòå  ÷èñëî: " << endl;
				cin >> m1.val;
				while (m1.val < 0)
				{
					cout << "Îøèáêà" << endl;
					cout << "Ââåäèòå  ÷èñëî: " << endl;
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
				cout << "Ââåäèòå  ÷èñëî: " << endl;
				cin >> s1.val;
				while (s1.val < 0)
				{
					cout << "Îøèáêà" << endl;
					cout << "Ââåäèòå  ÷èñëî: " << endl;
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
						w = w - q*60 ;						
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
		case 4: //Âû÷åòàíèå
			system("cls");
			h = 0;
			l = 0;
			h1.val = 0;
			m1.val = 0;
			s1.val = 0;
			cout << "Ó êàêîãî ïàðàìåòðà óáðàòü? " << endl;
			cout << "1. ×àñû" << endl;
			cout << "2. Ìèíóòû" << endl;
			cout << "3. Ñåêóíäû" << endl;
			cin >> k;
			while (k < 1 || k>3)
			{
				cout << "Îøèáêà ââîäà!" << endl;
				cin >> k;
			}
			if (k == 1)
			{
				cout << "Ââåäèòå  ÷èñëî: " << endl;
				cin >> h1.val;
				while (h1.val < 0)
				{
					cout << "Îøèáêà" << endl;
					cout << "Ââåäèòå  ÷èñëî: " << endl;
					cin >> h1.val;
				}
				h = TT.get_hour();
				if(h1.val<=h)
				TT = TT - h1;
				else
					cout << "íåëüçÿ" << endl;

			}
			if (k == 2)
			{
				cout << "Ââåäèòå  ÷èñëî: " << endl;
				cin >> m1.val;
				h = TT.get_min();
				while (m1.val < 0 || m1.val>(h+59))
				{
					cout << "Îøèáêà" << endl;
					cout << "Ââåäèòå  ÷èñëî: " << endl;
					cin >> m1.val;
				}
				
				if (m1.val <= h)
					TT = TT - m1;
				else
				{
					l = TT.get_hour();
					if (l > 0)
					{
						l -= 1;
						TT.set_hour(l);
						e = h + 60;
						e = e - m1.val;
						TT.set_min(e);						
						
					}else cout << "íåëüçÿ" << endl;
				}
					
			}
			if (k == 3)
			{
				s1.val = 0;
				cout << "Ââåäèòå  ÷èñëî: " << endl;
				cin >> s1.val;
				h = TT.get_sec();
				while (s1.val < 0 || s1.val>(h + 59))
				{
					cout << "Îøèáêà" << endl;
					cout << "Ââåäèòå  ÷èñëî: " << endl;
					cin >> s1.val;
				}
				if (s1.val <= h)
					TT = TT - s1;
				else
				{
					l = TT.get_min();
					if (l > 0)
					{
						l -= 1;
						TT.set_min(l);
						e = h + 60;
						e = e - s1.val;
						TT.set_sec(e);

					}
					else
					{
						h = TT.get_hour();
						if (h > 0)
						{
							e = 0;
							h -= 1;
							TT.set_hour(h);
							e = l + 60;
							e = e - 1;
							TT.set_min(e);
							e = TT.get_sec();
							e = e + 60 - s1.val;
							TT.set_sec(e);

						}
						else cout << "íåëüçÿ" << endl;
					}
				}
			}
			TT.print_time();
			break;
		case 5: 
			system("cls");
			cout << "Ââåäèòå ÷èñëî: " << endl;
			cin >> x;
			while (x < 0)
			{
				cout << "Îøèáêà" << endl;
				cout << "Ââåäèòå ÷èñëî: " << endl;
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
			cout << "Ââåäèòå ÷èñëî: " << endl;
			cin >> x;
			while (x < 0)
			{
				cout << "Îøèáêà" << endl;
				cout << "Ââåäèòå ÷èñëî: " << endl;
				cin >> x;
			}
			TT = TT / x;
			TT.print_time();
			break;
		case 0: //0 - Âûõîä
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
