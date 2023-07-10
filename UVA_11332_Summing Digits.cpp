#include <iostream>


using namespace std;

int main()
{
	int num,sum=0,temp=20;
	cin >>num;
	temp = num;
	while (num != 0) {
			while ((temp / 10) != 0){
				num = temp;
				sum = 0;
				while (num != 0) {
					sum += num % 10;
					num = num / 10;
				}
				temp = sum;
			}
	
		cout << sum<<endl;
		sum = 0;
		cin >> num;
		if ((num /10)==0)
			sum = num;
		temp = num;
	}

}