#include<iostream> //Header File
#include"header.h"//including header file
using namespace std;//namespace



int main() //main function
{    int choice;//declering veriable
   tollbooth a;//object declering
   while (true)//while loop
   {    system("pause");//pause program
       system("cls");//screen clear
    cout<<"Choose the following:\n";
    cout<<"Press 1 for Paying car:\n";
    cout<<"Press 2 for Non Paying car:\n";
    cout<<"Press 3 for display data:\n";
    cin>>choice;//input
    if (choice==1)//if statement
    {
        a.paying_car();//calling member function for paying car
    }
    else if (choice==2)
    {
        a.non_paying_car();//calling member function for non paying function
    }
        else if (choice==3)//calling display member function
        {
            a.display();
            break;
        }
    else
    {
        cout<<"\n";
    }
        

    }



    
     


    return 0; //main function returning 
}