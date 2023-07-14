#include <iostream>


using namespace std;

int main()
{
	int count, row, col;
	cin >> count;
	for (int i = 0; i < count; i++)
	{
		cin >> row >> col;
		cout << ((row / 3) * (col / 3)) << "\n";
	}
}