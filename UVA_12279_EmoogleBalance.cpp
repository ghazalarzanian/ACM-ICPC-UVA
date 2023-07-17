#include <iostream>
#include <cstdlib>

using namespace std;

int main()
{
	int N, num, count = 0, j = 1;
	cin >> N;
	while (N)
	{
		for (int i = 0; i < N; i++)
		{
			cin >> num;
			if (num > 0)
			{
				count++;
			}
			else if (num==0)
			{
				count--;
			}
		}
		cout << "Case " << j << ": " << count << endl;
		j++;
		count = 0;
		cin >> N;
	}
}