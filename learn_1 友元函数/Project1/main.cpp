#include<iostream>
#include"Time.h"
#include"stdlib.h"
#include"Match.h"
using namespace std;
/*
*****1.友元函数
      **1.1友元全局函数
	    1.2友元成员函数




*/


/*void printTime(Time &t)*/;//学习全局友元函数

int main()
{


	Time t(1, 2, 3);
	Match p;
	p.printTime(t);
	
	system("pause");
	return 0;

}


//void printTime(Time &t)//全局友元函数
//{
//
//	cout << t.m_iHour <<";"<< t.m_iMinute <<";"<< t.m_iSecond << endl;
//
//}