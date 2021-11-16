#include<iostream> //Header File
#include"task3.h"//including costum header file
using namespace std;//samespace


int main() //main function
{
    task3 obj1;//obj 1
    task3 obj2;//obj 2
    task3 obj3;//obj3
     obj1.obj_no();//member function called
     obj2.obj_no();//member function called
     obj3.obj_no();//member function called
    task3 obj4;//obj4
    task3 obj5;//obj 5
    task3 obj6;//obj6
     obj4.obj_no();//member function called
     obj5.obj_no();//member function called
     obj6.obj_no();//member function called
    cout<<"Total number of objects = "<<obj3.total_obj();

cin.get();
    

    return 0; //main function returning 0
}