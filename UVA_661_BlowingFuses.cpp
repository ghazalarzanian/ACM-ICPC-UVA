#include <iostream>
#include <cstdlib>
#include <string>
#include <map>
#include <vector>
using namespace std;

int main()
{
	int Devices, Operations, Capacity;
	int Sequence = 0;
	while (cin >> Devices >> Operations >> Capacity && Devices && Operations && Capacity)
	{
		Sequence++;
		vector<int> Device(Devices, 0);
		vector<bool> Device_flag(Devices, 0);
		int temp, total = 0, max = 0;
		for (int i = 0; i < Devices; i++)
		{
			cin >> Device[i];
		}
		for (int i = 0; i < Operations; i++)
		{
			cin >> temp;
			temp = temp - 1;
			if (Device_flag[temp] == 0)
			{
				total += Device[temp];
				if (total > max)
					max = total;
				Device_flag[temp] = 1;
			}
			else if (Device_flag[temp] == 1)
			{
				total -= Device[temp];
				Device_flag[temp] = 0;
			}
			if (total > Capacity)
			{
				cout << "Sequence " << Sequence << "\n" << "Fuse was blown.\n";
				for (int j = i + 1; j < Operations; j++)
					cin >> temp;
				break;
				
			}

		}
		if (total <= Capacity)
			cout << "Sequence " << Sequence << "\n" << "Fuse was not blown.\n" << "Maximal power consumption was " << max << " amperes.\n";
		cout << "\n";
		
	}

}