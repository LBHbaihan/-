#include<iostream>
using namespace std;
int main()
{
	int val1 = 0,val2 = 0;
	int max = 0,min = 0;
	
	
	cout<<"Enter two digits:";
	cin>>val1>>val2;
	if(val2==0)
	{
	   cout<<"error:please enter the correct second digits";
       cin>>val2;  
    }
	val1>val2? max = val1:max = val2;
	val1<val2? min = val1:min = val2;
	cout<<"min:"<<min<<"\nmax:"<<max<<"\n+:"<<val1+val2<<"\n-:"<<val1-val2<<"\n*:"<<val1*val2<<"\n/:"<<(double)val1/val2;
	
	return 0; 
}



