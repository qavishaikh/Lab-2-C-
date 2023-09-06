#include<iostream>
#include<conio.h>
using namespace std;
int main()
{
	int sub1,sub2,sub3,sub4,sub5,sum;
	float per;
	   cout<<"enter the five number"<<endl;
	   cin>>sum;
	   if(per>85){
	      cout<<"your grade is a+"<<endl; 
		  }
	     else if(per>=80 || per<85 ){
	     	cout<<"your grade is a"<<endl;
		 } 
		  else if(per>=70 || per<80 ){
	     	cout<<"your grade is b"<<endl;
		 } 
		  else if(per>=60 || per<70 ){
	     	cout<<"your grade is c"<<endl;
		 } 
		  else if(per>=70 || per<50 ){
	     	cout<<"your grade is d"<<endl;
		 } 
		 else{
		 	cout<<"you are fail";
		 }
}
