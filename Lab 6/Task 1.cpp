#include<iostream>//input output stream
using namespace std;//standerd namespace

class INT{//user defined data type
	float a;
public://public access specifier
	INT(){//constructer
	a=0;
	}

	

	INT operator +(INT z){//+ operator overloaded
		INT c;
		c.a=a+z.a;
		return c;
	
	}

	INT operator -(INT z){//-operator over loaded
		INT c;
		c.a=a-z.a;
		return c;
	
	}

	INT operator *(INT z){//*operator over loaded
		INT c;
		c.a=a*z.a;
		return c;
	
	}
	INT operator /(INT z){///operator over loaded
		INT c;
		c.a=a/z.a;
		return c;
	
	}

	friend istream &operator>>(istream &in, INT &i );//friend function for cin >> overloader
	friend ostream &operator<<(ostream &out, INT &i );//friend function for cout << overloader
	
	
};

istream &operator>>(istream &in, INT &i ){// function for cin >> overloader
	in>>i.a;
	return in;
	}
ostream &operator<<(ostream &out, INT &i ){//friend function for cout << overloader
	out<<i.a;
	return out;
	}

int main(){// int main
	INT x,y;
	cout<<"Enter 1st number: ";
	cin>>x;
	cout<<"Enter 2nd number: ";
	cin>>y;

	INT add=x+y;
	cout<<"Addition: "<<add<<endl;
	INT sub=x-y;
	cout<<"Subtraction: "<<sub<<endl;
	INT mul=x*y;
	cout<<"Multiplication: "<<mul<<endl;
	INT div=x/y;
	cout<<"Division: "<<div<<endl;

}