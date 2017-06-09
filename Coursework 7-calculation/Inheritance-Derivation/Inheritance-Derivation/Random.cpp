#include<iostream>
#include<ctime>
using namespace std;
#define RANDOM(a,b) (rand()%(b-a+1)+a)
class Random
{
public:
	int random() {}
};
class RandomNumber :public Random
{
private:
	bool ifGenerateSeed = false;
public:
	RandomNumber() {}
	int random(int down, int up)
	{
		if (!ifGenerateSeed)
		{
			ifGenerateSeed = true;
			srand((unsigned)time(NULL));
		}
		return RANDOM(down, up);
	}
};
class RandomOperation :public Random
{
public:
	RandomOperation() {}
	char random(char ifMultiplyDivide)
	{
		int tmp;
		RandomNumber x;
		if (ifMultiplyDivide == 'y')
		{
			tmp = x.random(1, 4);
			switch (tmp)
			{
			case 1:
			{
				return '+';
				break;
			}
			case 2:
			{
				return '-';
				break;
			}
			case 3:
			{
				return '*';
				break;
			}
			case 4:
			{
				return '/';
				break;
			}
			}
		}
		else
		{
			tmp = x.random(1, 2);
			switch (tmp)
			{
			case 1:
			{
				return '+';
				break;
			}
			case 2:
			{
				return '-';
				break;
			}
			}
		}
	}
};

int main()
{
	RandomNumber x;
	cout << x.random(0, 100) << endl;
	RandomOperation y;
	cout << y.random('y') << endl;
	return 0;
}