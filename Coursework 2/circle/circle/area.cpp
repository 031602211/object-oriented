/******************************************************************
Filename:area.cpp
Author:�Ǽ���  ��Date:2017/04/27
Function:�ⲿ����ʵ��
*******************************************************************/

#include"head.h"
const double pi = 3.14;             //��const���������
using namespace std;

double Area(double r)
{
	return (pi*r*r);                //����Բ�����
}

void output(double s)
{
	cout << "Area is " << s << endl;//������
}
