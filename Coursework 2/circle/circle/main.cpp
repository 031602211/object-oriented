/******************************************************************
Filename:main.cpp
Author:�Ǽ���  ��Date:2017/04/27
Function:�����ⲿ���� 
*******************************************************************/

#include "head.h"
using namespace std;
int main()
{
	double r,s;             //����뾶Ϊ"r",���Ϊ"s"

	cout<< "Please enter the radius of the circle:";

	cin>>r;                 //��ȡ�û����������
	s=Area(r);              //���ú���Area()��������
	output(s);              //���ú���output()��������
	return 0;
}
