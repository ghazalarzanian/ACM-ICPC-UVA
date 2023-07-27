#include <iostream>
#include <cstdlib>
#include<string>

using namespace std;

int main()
{
	float h,u,d,f,temp;
	int day;
	while (cin>>h>>u>>d>>f && h)
	{
		day = 1;
		temp = 0;
		f = u * f / 100;
		while (temp < h && temp>=0) {
			temp += u;
			if (u > 0)
				u -= f;
			if (temp >= h)
				break;
			temp -= d;
			if (temp < 0)
				break;
			++day;
		}
		if (temp <0)
			cout << "failure on day  " << day << "\n";
		else 
			cout << "success on day " << day << "\n";

	}

}
