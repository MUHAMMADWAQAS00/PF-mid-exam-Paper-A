#include<iostream>
using namespace std;
int main(){
	int choice,balance = 10000,amount;
     
	do{
	cout<<"Welcome in our bank"<<endl;
    cout<<"Press 1 for check balance"<<endl;
    cout<<"Press 2 for Deposit money"<<endl;
    cout<<"Press 3 for Withdrawl Money"<<endl;
    cout<<"Press 4 for Exit"<<endl;
	cin>>choice;
	switch(choice){
			balance = 1000;
	
		case 1:
			cout<<"Your current balance is $:"<<balance<<endl;
		break;
		case 2:
			cout<<"Enter amount you want a add in balance"<<endl;
			cin>>amount;
			balance+=amount;
	     cout<<"Your new balance is $:"<< balance <<endl;	
	    break;
	    case 3:
	    	cout<<"Enter amount you want withdraw "<<endl;
	    	cin>>amount;
	    	balance-=amount;
	     
	    	cout<<"Your new balance is $:"<< balance <<endl;
		
	    break;
		case 4:
		cout<<"Thanks for choosing our Bank !Good Byee"  <<endl;		
	    break;
}
} while(choice != 4);
//{
//	cout<<""
//}
	return 0;
}
