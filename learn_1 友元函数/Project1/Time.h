#ifndef TIME_H
#define TIME_H


#include<iostream>
using namespace std;
#include"Match.h"

/*声明类*/

class Time
{

	friend void Match::printTime(Time &t);//友元成员函数
public:
	Time(int hour, int min, int sec);//构造函数
private:

	int m_iHour;
	int m_iMinute;
	int m_iSecond;

};






#endif // !TIME_H

