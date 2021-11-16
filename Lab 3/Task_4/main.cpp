#include <iostream>//header file
#include "header.h"//header file


using namespace std;

 int main(){//main function

int x;
cout<<"Set degree: ";//taking input for array degree 
cin>>x;

polynomial a(x),b(x);//object decleration

cout<<"Polynomial A:\n";
a.input();//taking coefficient input for Polynomial A
cout<<"\n\n";
cout<<"Polynomial B:\n";


b.input();//taking coefficient input for Polynomial B
choice:
cout<<"\n\nPRESS:\n";
cout<<"Multiplying(*)\t\t\tAdding(+)\t\t\tSubtraction(-)\n:\t";
char ch;//taking input from user for functions
cin>>ch;
switch(ch) {//switch sattement 
  case 43:
    b.add(a);//addition function
    break;
  case 45:
        b.subtract(a);//subtraction function

    break;
  case 42:
        b.multiply(a);//multiplication function

    break;
  default:          
    cout<<"Wrong choice selected! \n";
    system("pause");
    system("cls");
    goto choice;
}

return 0;

 }