#include<iostream>
using namespace std;
class bank
{
char name[20];
int accno; 
int bal;
char acctype [20]; 
 public:
 void accinfo()  //function to enter information
 {
cout<<"\nEnter name:";
cin>>name;
 cout<<"\nEnter account number:";
cin>>accno;l
cout<<"\n Enter account type: ";
 cin>>acctype;
 cout<<"\n Enter balance amount:"; 
 cin>>bal;
} 
 void adeposite() //function to deposit amount
{
int deposite; 
cout<<"\nEnter deposite ammount:";
cin>>deposite;
bal=bal+deposite;
cout<<"\nToatl balance in account is "<<bal;
}
void awithdraw() //function to withdraw amount
 {
int withdraw; 
cout<<"\nEnter withdraw amount:";
cin>>withdraw;
bal=bal-withdraw;
 cout<<"\nTotal balance amount is; "<<bal;
}
void display() //function to display all information
{
cout<<"\n Your name is: "<<name;
 cout<<"\n Your account number is: "<<accno;
 cout<<"\n Your bank account type is:"<<acctype;
 cout<<"\n Balance amount is: "<<bal;
}
};
 int main()
{
 bank ab;
int ch;
do
 {
cout<<"\n MENU"; 
cout<<"\n1.Account Information";
 cout<<"\n 2.Deposite Amount";
 cout<<"\n 3.Withdraw Ammount"; 
cout<<"\n 4.Display"<<"\n 5.Exit";
 cout<<"\n Enter your choice:"; 
 cin>>ch;
 switch(ch)
 {
 case 1:
 ab.accinfo(); 
 break;
 case 2:
ab.adeposite();
break;
 case 3: 
 ab.awithdraw();
break;
case 4: 
 ab.display();
break;
case 5 :
return 0;
}
}
while(1);
}
