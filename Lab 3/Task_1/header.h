#include<iostream>//Header File
using namespace std;//including header file
class tollbooth //class tollbooth
{
    unsigned int car;//datatype
    double cash;//datatype

    public://public
    tollbooth()//constructer
    {car=0;//initialing all datatypes to 0
    cash=0;}
    void paying_car(){//paying car member function
        cout<<"car and cash added:\n";
        car++;//car increment
        cash+=0.5;//cash increment
    }
    void non_paying_car(){//nonpaying car function
        cout<<"1 car  added:\n";
        car++;  //car increment
    }
    void display(){//display data function
        cout<<"Total Car: "<<car<<endl<<"Total Cash: "<<cash;
    }
    
};