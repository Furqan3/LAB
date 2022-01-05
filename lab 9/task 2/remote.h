
#include<iostream>
#include"TV.h"
#include<string>
using namespace std;

class remote

{

public:

void setchannel(TV &t,int x){

    t.channel=x;
    cout<<"Channel = "<<t.channel<<endl;
}

void Volumeup(){ 

    cout<<"VOLUME:\n";
    TV k;

    k.volume++;
    cout<<"Volume UP!\n";
    cout<<"Volume = "<<k.volume<<endl;

}

void Volumedown(){ 

    cout<<"VOLUME:\n";
    TV k;

    cout<<"Volume Down!\n";
    k.volume--;

    cout<<"Volume = "<<k.volume<<endl;
}

void setting(TV t){
    cout<<"SETTING:\n";
    cout<<"Channel ="<<t.channel<<endl;
    cout<<"Volume ="<<t.volume<<endl;
    cout<<"Mode ="<<t.tmode<<endl;
    cout<<"Input ="<<t.iomde<<endl;


}

void setmode(TV t){int x;

cout<<"MODE:\n";

    mode:

    cout<<"Current TV mode ="<<t.tmode<<endl;
    cout<<"Press:\n";
    cout<<"1-->Cable\n";
    cout<<"2-->Antenna\n";

    cin>>x;

    if(x==1){cout<<"Mode Changed: \n";
            t.tmode="Cable";
    }

    else if(x==2){
        cout<<"Mode Changed: \n";
        t.tmode="Antenna:\n";
    }

    else{system("cls");

    goto mode;}
    
}

};

