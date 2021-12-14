# pragma once
#include<iostream>
#include<string>
using namespace std;


class account{

protected:
	static int count;
	double balance;
	string name;
	 int account_no;
public:
	account(int x=0){
		account_no= 1;

		cout<<"Enter your name: ";
		getline(cin,name);


	if(x>0){
		balance=x;
	}
	else{
	balance=0;
	cout<<"ERROR!\nThe initial balance was invalid\n";
	}
	count ++;
	}
	
	void cradit(double b=0);
	void debit(double b=0, double c=0);
	double get_balance();
	int get_account_no();

	~account(){};
};
 int account::count=0;



 void account::cradit(double b){
 balance+=b;
 cout<<"Your balance have successfully added!\n";
  cout<<"Your current balance is = "<<balance<<endl;
 }

 void account::debit(double b, double c){
	 if(b+c<=balance){
	 balance-=b;
	 cout<<"You have withdrawal amount in= "<<b<<endl;
	 cout<<"Your current balance is 0 "<<balance<<endl;
	 }
	 else{
	 cout<<"Debit amount exceeded account balance";
	 }
 
 }
 double account ::get_balance(){
 return balance;
 }
  int account::get_account_no(){
 return account_no;}

















