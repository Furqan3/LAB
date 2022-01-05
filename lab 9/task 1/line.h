#include<iostream>//iostream header file
#include"axis.h"//header file
#include<math.h>//math header file

using namespace std;//namespace library

class line//line class
{
private://private access specifier
    point A,B; //objects of point class

public://public access specifier

    line(){}//constructor


    void Input(){//input function for taking x and y from user

        int a;

        cout<<"Point A:\n";
        cout<<"Enter x :";
        cin>>a;
        A.setx(a); 
        cout<<"Enter y :";
        cin>>a;
        A.sety(a); 

        cout<<"\nPoint B:\n";
        cout<<"Enter x :";
        cin>>a;
        B.setx(a); 
        cout<<"Enter y :";
        cin>>a;
        B.sety(a); 
    }

    void mid_point(){//function for calculating midpoint 
        double ax,ay,bx,by,mx,my;
        ax=A.getx();
        ay=A.gety();
        bx=B.getx();
        by=B.gety();
        mx=(ax+bx)/2;
        my=(ay+by)/2;
        cout<<"Mid Point= ("<<mx<<","<<my<<")"<<endl;
    }

    void distance(){//distance function for calculating distance
           double ax,ay,bx,by,d;
        ax=A.getx();
        ay=A.gety();
        bx=B.getx();
        by=B.gety();
        d=sqrt(((bx-ax)*(bx-ax))+((by-ay)*(by-ay)));
        cout<<"Distance= "<<d<<endl;
    }

    void origin(){//origin function for checking weather the line is passing through origin or not
           double ax,ay,bx,by,o1,o2;
        
        ax=A.getx();
        ay=A.gety();
        bx=B.getx();
        by=B.gety();
        
        o1=ax*(by-ay);
        o2=by*(bx-ax);

        if(o1==o2){cout<<"YES! This line Passes through origine:\n";}
        else{cout<<"NO! This line does not passes through origine:\n";}
    }

    ~line(){}
};


