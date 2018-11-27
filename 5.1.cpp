/*5.1- Define a class to represent Bank Account. Include the following members.
See the book*/
#include<iostream>
using namespace std;
class account
{
	char name[15];
	int acno, typ;
	float bal;
	public:
		void init(int a,int t,float b);
		void deposit();
		void wthdraw();
		void display();
};
void account::init(int a,int t,float b)
{
	cout<<"enter name: ";
	cin>>name;
	acno=a;
	typ=t;
	bal=b;
}
void account::deposit()
{
	float am;
	cout<<"Enter Ammount to deposit: ";
	cin>>am;
	if(am>0)
		bal+=am;
}
void account::wthdraw()
{
	float am;
	cout<<"Enter Ammount to withdraw: ";
	cin>>am;
	if(bal>=am)
		bal-=am;
	else
		cout<<"Insufficient Balance";
}
void account::display()
{
	cout<<"Name: "<<name;
	cout<<"\nBalance: "<<bal;
}
int main()
{
	int ch=0;
	account ob1;
	ob1.init(1223233,1,0.0);
	do
	{
		cout<<"1: Deposit\n2: Withdraw\n3: Display info\n4: Exit\n";
		cout<<"Enter choice: ";
		cin>>ch;
		switch(ch)
		{
			case 1: ob1.deposit();
			break;
			case 2: ob1.wthdraw();
			break;
			case 3: ob1.display();
			break;
			case 4: exit(0);
			break;
			default: cout<<"Wrong I/P\n";
			break;
		}
	}
	while(ch!=4);
	return 0;
}
