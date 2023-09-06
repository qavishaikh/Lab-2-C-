#include<iostream>
#include<conio.h>
using namespace std;
int main()
 {
 	int select;
 	int size;
 	char choice;
 	 cout<<"\n\t\tpizza falavor"<<endl;
 	 
 	cout<<"pixxa in fagiota"<<endl;
	  	cout<<"pixxa in chicken tikka"<<endl;
 	cout<<"pixxa in italian"<<endl;
 	cout<<"pixxa in kabab stuf"<<endl;
 	cout<<"Which pixxa do you want"<<endl;
 	cin>>select;
 	switch(select)
{
	case 1:
		cout<<"\tfagiota"<<endl;
		break;
	case 2:
		cout<<"\tchicken tikka"<<endl;
		break;
	case 3:
		cout<<"\titalian"<<endl;
		break;
	case 4:
		cout<<"\tkabab stuf"<<endl;
		break;	
	}
	cout<<"\n\tpizza size"<<endl;
	
	cout<<"Small"<<endl;
	cout<<"Middum"<<endl;
 	cout<<"large"<<endl;
 	cout<<"Xtra large"<<endl;
 	
 	cout<<"Which pixxa Size do you want"<<endl;
	cin>>size;
	
     switch(size){
     case 1:
	     cout<<"give me small pizza"<<endl;
		 break;	
	 case 2:
	     cout<<"give me medium pizza"<<endl;
		 break;	
	 case 3:
	     cout<<"give me large pizza"<<endl;
		 break;	
     case 4:
	     cout<<"give me x/l pizza"<<endl;
		 break;		  	 	 
	 }
        cout<<"do you want xtra cheez"<<endl;
        cin>>choice;
    switch(choice){
    case 'y':
	    cout<<"yes to you want"<<endl;
			break;
	case 'n':	
	     cout<<"No i don't want xtra cheez"<<endl; 
		 break;	
	}
	  	cout<<"\n\n\tcreate by : M Hamdan"; 
 getch();	
 return 0;
 		
 }
