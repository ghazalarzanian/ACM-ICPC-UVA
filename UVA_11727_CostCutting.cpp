#include <iostream>
#include <string.h>

using namespace std;

int main()
{
	int count, num1,num2,num3;
	cin >> count;
	for (int i = 0;i < count;i++)
	{
		cin >> num1;
		cin >> num2;
		cin >> num3;
		cout << "Case " << i + 1<<": ";
		if ((num1<=num2 || num1 <=num3) && (num1>=num2 || num1 >=num3))
		{
			cout << num1;
		}
		else if ((num3 <= num1 || num3 <= num2) && (num3 >= num2 || num3 >= num1))
		{
			cout << num3;
		}
		else {
			cout << num2;
		}
		cout <<endl;
	}
}