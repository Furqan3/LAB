#include<iostream>//standard input-output stream header file
#include"header.h"//costum header file
using namespace std;//namespace

int main(){//main function
    
 
    
   cout<<"Time A:\n";//displaying time a on screen
   const time a(14,43,23);//declaring & initiolizinf function
    a.display();//calling display function
     cout<<"Time B:\n";//displaying time b on screen
   const time b(12,27,56);//declaring & initiolizinf function
    b.display();//calling display function
   time c;//declearing function
   cout<<"Add Time:  ";//displaying add time  on screen
    c.add_time(a,b);//calling function add time with objects a & b as a perameter
    c.display();//calling display function

}