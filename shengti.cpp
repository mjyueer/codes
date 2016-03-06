#include<iostream>
using namespace std;
#include<stdio.h>
#include<stdlib.h>
#include<time.h>
void main()
{
	int i,j;
	srand((int)time(NULL));
	for (int i = 1; i < 31; i++)
	{
		cout << "第" << i << "道题是：";
		int a = (int)j = (rand() * 100) / RAND_MAX ;
		int b = (int)j = (rand() * 100) / RAND_MAX ;//随机生成四个运算符的其中一个
		int c = b % 4;
		int d = (int)j = (rand() * 100) / RAND_MAX ;
		//真分数生成：
		int e = (int)j = (rand() * 100) / RAND_MAX ;
		int f = (int)j = (rand() * 100) / RAND_MAX ;
		double A[2];
		for (int x = 0; x < 2; x++)//生成两个真分数
		{
			if (e < f)
			{
				A[x] = e / f;
			}
			else
			{
				A[x] = f / e;
			}
		}
		float g = A[0], h = A[1];
		int m = b % 2;
		if (m = 1)//整数的四则运算
		{
			switch (c)
			{
			default:
				break;
			case 0:cout << a << "+" << d << "=" << endl; break;
			case 1:cout << a << "-" << d << "=" << endl; break;
			case 2:cout << a << "*" << d << "=" << endl; break;
			case 3:cout << a << "/" << d << "=" << endl; break;
			}
		}
		else//真分数的四则运算
		{
			switch (c)
			{
			
			case 0:cout << g << "+" << h<< "=" << endl; break;
			case 1:cout << g<< "-" << h<< "=" << endl; break;
			case 2:cout << g<< "*" << h << "=" << endl; break;
			case 3:cout << g<< "/" << h<< "=" << endl; break;
			}
		}
		

	}
	
}