#include<iostream>
using namespace std;
int main()
{
	int i,n,n1,sum=0,rem;
	cout<<"enter the number";
	cin>>n;
	n1=n;
	while(n!=0)
	{
		rem=n1%10;
		sum=sum+(rem*rem*rem);
		n1/=10;
	}
	if(sum==n)
	{
		cout<<"armstrong";
	}
	else
	{
		cout<<"not a armstrong";
	}
	return 0;
}
