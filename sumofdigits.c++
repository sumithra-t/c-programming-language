#include<iostream>
using namespace std;
int main()
{
	int num,sum,rem;
	cout<<"enter the number:";
	cin>>num;
	while(num!=0)
	{
		rem=num%10;
		sum=sum+rem;
		num/=10;
	}
	cout<<"sum of the digits is"<<sum;
	return 0;
}
