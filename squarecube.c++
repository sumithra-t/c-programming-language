#include<iostream>
using namespace std;
int main()
{
	float number,square,cube;
	cout<<"\nPlease Enter the Number =  ";
	cin >> number;
	square = number*number;
	if(number>=0)
    {
         cout<<"invalid input";
    }
    else
    {
    cout << "\nThe Square of the Given "<<number<<"="<< square;
	cube = number*number*number;
	cout << "\nThe cube of the Given " << number <<"="<< cube;
    }
}
