#include<iostream>
using namespace std;
int main()
{
	int num, sum=0;
	cout<<"Enter any number";
	cin>>num;
	while(num>=50 && num<=200)
	{
		sum=sum+num;
		cout<<"Enter any number";
	    cin>>num;	    
	}
	cout<<"Sum = "<<sum;
	
}
