#include <iostream>
#include <cstdlib>

using namespace std;

int main()
{
	int counter,num;
	cin >> counter;
	for (int i = 0; i < counter; i++)
	{
		cin >> num;
		cout<<abs(((((((((num * 567) / 9) + 7492) * 235) / 47) - 498) / 10) % 10))<<endl;
	}
	
}