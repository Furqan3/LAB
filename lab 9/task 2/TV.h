#pragma once
#include<iostream>
#include<string>
using namespace std;

class TV

 {

private:

 static int volume;

 int channel;

 bool power;

 string tmode,iomde;

public:

    TV(){

    volume=50;

    power=true;

    tmode="Cable";

    iomde="TV";
}

    friend class remote;

    ~TV(){}

};

int TV:: volume=50;