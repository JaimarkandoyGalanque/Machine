#include<iostream>
using namespace std;
int main(){
char ch;
do{
	int choice;
	cout<<"\n>>>>>>>Cachier Interface<<<<<<<\n";
	cout<<"================================\n";
	cout<<">[1] pepsi (p100)\n";
	cout<<">[2] Dr-pepper (p120)\n";
	cout<<">[3] Coca-cola (p95)\n";
	cout<<"================================\n";
	cout<<"choice: ";
	cin>>choice;
	double payment;
	switch(choice)
	{
		case 1:{
			cout<<"\npayment please...";
			cin>>payment;
			if(payment<100)
			{
				cout<<"you don't have funds";
			}
			else
			{
				cout<<"you have purchased Pepsi..\n";
				cout<<"change :"<<payment-100;
			}
			break;
		}
		case 2:{
			cout<<"\npayment please...";
			cin>>payment;
			if(payment<120)
			{
				cout<<"you don't have funds";
			}
			else
			{
				cout<<"you have purchased Dr-pepper..\n";
				cout<<"change :"<<payment-120;
			}
			break;
		}
		case 3:{
			cout<<"\npayment please...";
			cin>>payment;
			if(payment<95)
			{
				cout<<"you don't have enough funds";
			}
			else
			{
				cout<<"you have purchased Coca-cola..\n";
				cout<<"change :"<<payment-95;
			}
			break;
		}
		default:{
			cout<<"invalid option\n";
			break;
		}
	}
cout<<"\nDo you wanna purchase again(y/n)?";
cin>>ch;
}
while(ch=='y'||ch=='Y');
	return 0;
}