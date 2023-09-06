#include<iostream>
#include<conio.h>
using namespace std;
int main(){
	int max=0;
	int Num[5];
	cin>>Num[5];
	for(int i=0;i<=5;i++){
		max+=Num[i];
	}
	int i=0;
	if(Num[i]>max){
		max=Num[i];
		cout<<max;
	}
	return 0;
}
