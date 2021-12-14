
#include<iostream>
#include<string>
#include "base.h"
using namespace std;


class checking_account :public account{
protected:
	double charge;
public:
	checking_account (double c,double b):account(b)
	{
		charge=c;
		debit(b,c);
	}

	~checking_account(){};
};