#include<iostream>
#include"Time.h"
#include"stdlib.h"
#include"Match.h"
using namespace std;
/*
*****1.��Ԫ����
      **1.1��Ԫȫ�ֺ���
	    1.2��Ԫ��Ա����




*/


/*void printTime(Time &t)*/;//ѧϰȫ����Ԫ����

int main()
{


	Time t(1, 2, 3);
	Match p;
	p.printTime(t);
	
	system("pause");
	return 0;

}


//void printTime(Time &t)//ȫ����Ԫ����
//{
//
//	cout << t.m_iHour <<";"<< t.m_iMinute <<";"<< t.m_iSecond << endl;
//
//}