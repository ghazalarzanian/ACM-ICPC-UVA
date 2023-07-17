#include <iostream>
#include <cstdio>
#include<string>
using namespace std;

int main()
{
	int count=1, div_point_x, div_point_y,target_x, target_y;
	while (count != 0)
	{
		cin >> count;
		cin >> div_point_x>>div_point_y;
		for (int i = 0; i < count; i++)
		{
			cin >> target_x>>target_y;

			if (target_x==div_point_x || target_y==div_point_y)
			{
				cout << "divisa\n";
			}
			else if (target_x>div_point_x && target_y > div_point_y)
			{
				cout << "NE\n";
			}
			else if (target_x > div_point_x && target_y < div_point_y)
			{
				cout << "SE\n";
			}
			else if (target_x < div_point_x && target_y > div_point_y)
			{
				cout << "NO\n";
			}
			else if (target_x < div_point_x && target_y < div_point_y)
			{
				cout << "SO\n";
			}
		}
	}
	
}