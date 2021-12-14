

#include<iostream>
#include<string>
#include "base.h"
using namespace std;



class credit_card_account :public account{
protected:
	int pin;
public:
	credit_card_account(double x, int y):account(x){
	pin=y;
	}
	void update_pin(){
	cout<<"Enter your new pin:";
	cin>>pin;
	}

	~credit_card_account(){};
};

