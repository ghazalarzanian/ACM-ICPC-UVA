#include <iostream>
#include <cstdlib>
#include<string>

using namespace std;

int main()
{
	int count,count_one,count_two;
	string word;
	cin >> count;
	for (int i = 0; i < count; i++)
	{
		count_one = 0;
		count_two = 0;
		cin >> word;
			if (word.size() == 3)
			{
				for (int i = 0; i < word.size(); i++)
				{
					if ((word[i] == 'o'&&i==0) || (word[i] == 'n' && i == 1) || (word[i] == 'e' && i == 2))
						count_one++;
					if ((word[i] == 't' && i == 0) || (word[i] == 'w' && i == 1) || (word[i] == 'o' && i == 2))
						count_two++;
				}
				if (count_one >= 2)
					cout << '1'<<endl;
				if (count_two >=2)
					cout << '2' << endl;
			}
			else if(word.size()==5)
				cout << '3'<<endl;
	}
}