#include <iostream>
#include <locale>
#include "time1.h"

using namespace std;

/* ŒÕ—“–” “Œ–€*/

time1::time1() {}
time1::time1(int value, int value2, int value3)
{
	 h.val = value;
	m.val = value2;
	s.val = value3;
}
time1::~time1() {}
time1::time1(const time1& real_copy)
{
	this->h = real_copy.h;
	this->m = real_copy.m;
	this->s = real_copy.s;
}

//Ã≈“Œƒ€
void time1::set_hour(int& value)
{
	h.val = value;
 }

void time1::set_min(int& value)
{
	m.val = value;
}

void time1::set_sec(int& value)
{
	s.val = value;
}

int time1::get_hour()const
{
	return h.val;
}

int time1::get_min()const
{
	return m.val;
}

int time1::get_sec()const
{
	return s.val;
}

time1 time1::operator+ (hour& hourr)
{	
	return time1(h.val + hourr.val, m.val, s.val);
}

time1 time1::operator+ (minn& hourr)
{
	return time1(h.val, m.val+hourr.val, s.val);
}

time1 time1::operator+ (sec& hourr)
{
	return time1(h.val, m.val, s.val + hourr.val);
}
time1 time1::operator- (sec& hourr)
{
	return time1(h.val, m.val, s.val - hourr.val);
}
time1 time1::operator- (minn& hourr)
{
	return time1(h.val, m.val - hourr.val, s.val);
}
time1 time1::operator- (hour& hourr)
{
	return time1(h.val - hourr.val, m.val, s.val );
}

void time1::print_time()
{
	cout << "¬ÂÏˇ: " << h.val << " : " << m.val << " : " << s.val <<endl;
}

time1 time1::operator* (int value)
{
	return time1(h.val * value, m.val * value, s.val * value);
}

time1 time1::operator/ (int value)
{
	return time1(h.val / value, m.val / value, s.val / value);
}