#include <iostream>
#include "header.h" 
using namespace std;
int main(){
    int x;
    cout<<"Enter Size of array: ";
    cin>>x;
    hugeint a(x);
    a.user_input();
    hugeint b=a;
    // system("cls");
    cout<<"Number A: \n";
    a.output();
    cout<<"\n\nNumber B: \n";
    a.output();
    cout<<"Number A is equal to number B="<<a.isequal(b);
    cout<<"\nNumber A is equal to Zero="<<a.izero();
    cout<<"\nNumber A is greater to Zero="<<a.izero()<<endl;
    a.add(b);
    

    return 0;
}