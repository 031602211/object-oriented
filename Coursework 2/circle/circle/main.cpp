/******************************************************************
Filename:main.cpp
Author:盖嘉轩  ；Date:2017/04/27
Function:调用外部函数 
*******************************************************************/

#include "head.h"
using namespace std;
int main()
{
	double r,s;             //定义半径为"r",面积为"s"

	cout<< "Please enter the radius of the circle:";

	cin>>r;                 //获取用户输入的数据
	s=Area(r);              //调用函数Area()，求得面积
	output(s);              //调用函数output()，输出面积
	return 0;
}
