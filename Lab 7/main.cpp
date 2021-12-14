#include<iostream>
#include<string>
#include"base.h"
#include"child1.h"
#include"child2.h"

int main(){

account a(10000);
cout<<"Account number= "<<a.get_account_no()<<endl;
a.cradit(4000);
a.debit(5000);
cout<<"Balance= "<<a.get_balance()<<endl;
cout<<"################################################################################\n\n";

credit_card_account b(5000,7456);
cout<<"################################################################################\n\n";
checking_account c(4500,45);
cout<<"################################################################################\n\n";



system("pause");
return 0;
}