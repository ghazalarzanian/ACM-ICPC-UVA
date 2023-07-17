#include <iostream>
#include <cstdlib>
#include<string>

using namespace std;

int main()
{
	string operation;
	int count,num=0,total=0;
	cin >> count;
	for (int i = 0; i < count; i++)
	{
		cin >> operation;
		if (operation == "donate")
		{
			cin >> num;
			total += num;
		}
		if (operation == "report")
		{
			cout << total << "\n";
		}
	}
}