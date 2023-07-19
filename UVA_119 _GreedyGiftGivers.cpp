#include <iostream>
#include <cstdlib>
#include<string>

using namespace std;

int main()
{
	bool again = true;
	int count, amount, num, giver_index = 0, given_index = 0, output;
	string names[10], given, giver;
	while (cin >> count)
	{
		int** arr = new int* [count];
		for (int i = 0; i < count; i++)
		{
			cin >> names[i];
			arr[i] = new int[count];
		}
		for (int i = 0; i < count; i++)
		{
			for (int j = 0; j < count; j++)
			{
				arr[i][j] = 0;
			}
		}
		for (int i = 0; i < count; i++)
		{
			cin >> giver;
			for (int j = 0; j < count; j++)
				if (names[j] == giver)
				{
					giver_index = j;
					break;
				}
			cin >> amount;
			cin >> num;
			for (int i = 0; i < num; i++)
			{
				cin >> given;
				for (int j = 0; j < count; j++)
				{
					if (names[j] == given)
					{
						given_index = j;
						break;
					}
				}
				arr[giver_index][given_index] = amount / num;
			}
		}
		for (int i = 0; i < count; i++)
		{
			output = 0;

			for (int j = 0; j < count; j++)
			{
				output -= arr[i][j];
				output += arr[j][i];
			}
			cout << names[i] << " " << output << endl;
		}
		cout << endl;
	}
}
