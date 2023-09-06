#include<iostream>
#include<conio.h>
using namespace std;
int main(){
	string user;
	int password;
	  cout<<"\n\t\t ***login page***"<<endl;
	  cout<<"\n\tEnter the user name"<<endl;
	  cin>>user;
	  cout<<"\n\tEnter the Password"<<endl;
	  cin>>password;
	  
	 if(user=="Hamdan"&&password==1234){
	 	cout<<"You are succeful Login"<<endl;
	 }
	 else{
	 	cout<<"you are unsueccflly login"<<endl;
	 }
}
