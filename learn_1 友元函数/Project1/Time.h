#ifndef TIME_H
#define TIME_H


#include<iostream>
using namespace std;
#include"Match.h"

/*������*/

class Time
{

	friend void Match::printTime(Time &t);//��Ԫ��Ա����
public:
	Time(int hour, int min, int sec);//���캯��
private:

	int m_iHour;
	int m_iMinute;
	int m_iSecond;

};






#endif // !TIME_H

