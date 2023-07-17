#include <iostream>
#include <cstdlib>
#include<string>

using namespace std;

int main()
{
	int w, h, l, count;
	cin >> count;
	for (int i = 0; i < count; i++)
	{
		cin >> w >> h >> l;
		if (w <= 20 && h <= 20 && l <= 20)
		{
			cout << "Case " << i + 1<< ": good\n";
		}
		else cout << "Case " << i + 1 << ": bad\n";
	}
}