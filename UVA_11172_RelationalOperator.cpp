#include <iostream>


using namespace std;

int main()
{
	int count,num1,num2;
	cin >>count;
	for (int i = 0; i < count; i++)
	{
		cin >> num1 >> num2;
		if (num1 < num2)
			cout << "<\n";
		else if (num1 > num2)
			cout << ">\n";
		else cout << "=\n";
	}

}