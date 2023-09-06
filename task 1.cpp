#include<iostream>
#include<conio.h>
using namespace std;
int main()
{
	const int size = 10;
	int pos_num = 0;
	int neg_num = 0;
	int zero_num = 0;
	int pos_sum = 0;
	int neg_sum = 0;
	int a[10];
	int b=1, c=1, d=1, e=1;
	for(int y=0; y<=9;y++){
		cout<<"\tEnter Number"<<e<<" = ";
		cin>>a[y];
		e++;}
	for(int x=0; x<=9;x++){
		if(a[x]>0){
			pos_sum +=a[x];
			a[x]++;
			pos_num =+b;
			b++; 	}
		else if(a[x]<0){
			neg_sum+=a[x];
			a[x]++;
			neg_num=+c;
			c++;	}
		else{
			zero_num=+d;
			d++;	}
	}
		cout<<"\n\tPOSITIVE NUMBER = "<<pos_num<<endl;
		cout<<"\tNEGATIVE NUMBER = "<<neg_num<<endl;
		cout<<"\t ZERO NUMBER = "<<zero_num<<endl;
		cout<<"\t POSITIVE SUM = "<<pos_sum<<endl;
		cout<<"\t NEGATIVE SUM = "<<neg_sum<<endl;
		cout<<"\n\t ALIZA NOOR";
		getch();
		return 0;
}

