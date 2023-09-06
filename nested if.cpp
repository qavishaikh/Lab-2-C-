#include<iostream>
using namespace std;
int main(){
	char matric;
	char inter;
	char graduate;
	cout<<"Do you passed Mtriculation"<<endl;
	cout<<"Enter Yes or No (y/n)"<<endl;
	cin>>matric;
	cout<<"Do you passed Intermediate"<<endl;
	cout<<"Enter Yes or No (y/n)"<<endl;
	cin>>inter;
	cout<<"Do you passed Gruation"<<endl;
	cout<<"Enter Yes or No (y/n)"<<endl;
	cin>>graduate;
	if(matric=='y')
	{
		if(inter=='y')
		{
			if(graduate=='y')
			{
				cout<<"You are able to give CSS exams"<<endl;
			}
				else{
		cout<<"You are not nable to give CSS exams";
	}
			
		}
}
	
	return 0;
}
