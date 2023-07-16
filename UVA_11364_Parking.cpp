#include <iostream>
#include <cstdio>
#include<string>
using namespace std;

int main()
{
	int count,stores,num,max,min;
	cin >> count;
	for (int i = 0; i < count; i++)
	{
		cin >> stores;
		cin >> num;
		max = num;
		min = num;
		for (int i = 0; i < stores-1; i++)
		{
			cin >> num;
			if (num<min)
			{
				min = num;
			}
			if (num>=max)
			{
				max = num;
			}
		}
		cout << (max - min) * 2 << '\n';
	}
}