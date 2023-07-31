#include <iostream>
#include <cstdlib>
#include <string>
#include <map>
#include <vector>
using namespace std;

int main()
{
	int count, start,end,case_counter=1;
	bool result;
	char number[1000000];
	char compare;
	while (cin >> number) {
		cout << "Case " << case_counter << ":\n";
		cin >> count;
		for (int i = 0; i < count; i++)
		{
			result = true;
			cin >> start>>end;
			if (start > end) {
				int temp = start;
				start = end;
				end = temp;
			}
			compare = number[start];
			for (int j = start; j < end+1; j++)
			{
				if (number[j] != compare)
				{
					cout << "No\n";
					result = false;
					break;
				}
				else
					result = true;
			
			}
			if (result == true)
				cout << "Yes\n";
		}
		case_counter++;
	}
}