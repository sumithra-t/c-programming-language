#include <iostream>  
using namespace std;  

class sample
{
	public:
		   int regno,m1,m2,tot, avg;    
		   string dep, name;
		void getdata();
		void putdata();
		void show()
		{
			cout<<" This is the program to demonstrate to getinput and printout ";
		}
};

void sample::getdata()
{
cout<<"\nEnter a name of student: ";    
cin>>name;    
cout<<"\nEnter dep of student:";
cin>>dep;
cout<<"Enter two marks of student";
cin>>m1>>m2;
tot=m1+m2;
}
  
  void sample::putdata()
  {
  	cout<<"\nThe name of student is "<<name;
  	cout<<"\nThe dep of student is"<<dep;
  	cout<<"\nAverage marks of student is"<<tot/2;
  }
int main()  
{ sample  s1;
 s1.show();
 s1.getdata();
 s1.putdata();
return 0;  
}
