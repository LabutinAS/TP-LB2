#pragma once

typedef struct hour
{
	int val;
} hour; //элемент класса

typedef struct minn
{
	int val;
} minn; //элемент класса

typedef struct sec
{
	int val;
} sec; //элемент класса

class time1
{

	
public: 
	hour h;
	minn m;
	sec s;
	//КОНСТРУКТОРЫ
	time1();
	explicit time1(int value, int value2, int value3);
	~time1();
	time1(const time1& real_copy);

	//МЕТОДЫ
	void set_hour(int& value);
	void set_min(int& value);
	void set_sec(int& value);
	int get_hour()const;
	int get_min()const;
	int get_sec()const;
	void print_time();

	time1 operator+(hour& hourr);
	time1 operator+(minn& hourr);
	time1 operator+(sec& hourr);




	time1 operator- (hour& hourr);
	time1 operator- (minn& hourr);
	time1 operator- (sec& hourr);

	time1 operator* (int value);
	time1 operator/ (int value);
};
