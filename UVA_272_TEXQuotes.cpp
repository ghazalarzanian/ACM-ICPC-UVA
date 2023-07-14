#include <iostream>
#include<string>


using namespace std;

int main()
{
	bool count = true;
	string sentence="",temp,answer="";
	while (getline(cin, temp))
	{
		sentence += temp+'\n';
	}
	for (int i = 0; i < sentence.size(); i++)
	{
		if (sentence[i] == '"')
		{
			if (count  == true)
			{
				answer+= "``";
				count = false;
			}
			else
			{
				answer += "''";
				count = true;
			}

		}
		else 
			answer += sentence[i];
	}
	cout << answer;

}