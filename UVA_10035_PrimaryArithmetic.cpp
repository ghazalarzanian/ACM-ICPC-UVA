#include <iostream>
#include <cstdio>
using namespace std;

int main()
{
	int num1, num2,temp1,temp2,count1=1,count2=1,carry=0,counter=0;
	cin >> num1 >> num2;
	while (num1 ||  num2)
	{
		count1 = num1;
		count2 = num2;
		counter = 0;
		carry = 0;
		while (count1|| count2)
		{
			temp1 = count1 % 10;
			count1 = count1 / 10;
			temp2 = count2 % 10;
			count2 = count2/ 10;
			carry = temp1 + temp2+carry;
			if (carry /10) {
				carry = 1;
				counter++;
			}
			else{
				carry = 0;
			}
		}
		if (counter==0)
		{
			cout << "No carry operation.\n";
		}
		else if (counter ==1)
		{
			cout << counter << " carry operation.\n";
		}
		else
		{
			cout << counter << " carry operations.\n";
		}
		cin >> num1 >> num2;
	}
}