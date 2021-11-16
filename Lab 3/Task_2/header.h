#include<iostream>
using namespace std;

class time{//class name time
int hours,minutes,seconds;//declearing variables in private
public://public keywords
    
    time(int h =0, int m=0, int s=0):hours(h), minutes(m), seconds(s)//member initializing list
    {}
    display()const{//display function
        cout<<hours<<" : "<<minutes<<" : "<<seconds<<endl;//output hours,minutes,seconds
    }
   
    void add_time(time a,time b){//add time function
        seconds=a.seconds+b.seconds;//second adding
        if(seconds>59){//if statement fi checking second
            seconds-=60;//second discrimination
            minutes++;//minutes increments
        }
        minutes+=a.minutes+b.minutes;//minutes adding
        if (minutes>59)//if state for minutes 
        {
            minutes-=60;//minutes decreas
            hours++;//hours increments
        }
        hours+=a.hours+b.hours;//hours adding
        if (hours>23)//if state for hours
        {
            hours-=24;//hours decrease
        }
        
        

    }
        
        



};