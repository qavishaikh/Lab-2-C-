#include<iostream>
#include<conio.h>
using namespace std;
int main()
{
	char ch;
	int char_count=0;
	do
	{
		cout<<"Enter any character other then A";
		ch = getche(); 
		cout<<endl;
		char_count++;
		}
		while(ch!='A'&&ch!='a');
		cout<<"numbers of charachter entered = "<<char_count;
		return 0;
}
