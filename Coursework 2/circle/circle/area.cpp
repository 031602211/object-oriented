/******************************************************************
Filename:area.cpp
Author:盖嘉轩  ；Date:2017/04/27
Function:外部函数实现
*******************************************************************/

#include"head.h"
const double pi = 3.14;             //用const变量定义π
using namespace std;

double Area(double r)
{
	return (pi*r*r);                //计算圆的面积
}

void output(double s)
{
	cout << "Area is " << s << endl;//输出结果
}
