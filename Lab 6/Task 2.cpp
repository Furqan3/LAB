#include<iostream>//input output stream
using namespace std;//standerd namespace


class time{//user define datatype
	int h,m,s;
	
public://public specifier
	time(){//constructer
	h=0;
	m=0;
	s=0;
	}

	time operator+(time b){//+operator overload
	time c;
	c.s=s+b.s;
	
	c.m=m+b.m+(c.s/60);
	c.h=h+b.h+(c.m/60);
	c.s=c.s%60;
	c.m=c.m%60;
	c.h=c.h%24;

	
	return c;
	}

	
	friend istream &operator>>(istream &in, time &b);//input operator oveloading
	friend ostream &operator<<(ostream &in, time &b);//output operator overload
	
};

istream &operator>>(istream &in, time &b){//input operator oveloading
cout<<"Hours: ";
in>>b.h;
cout<<"Minuts: ";
in>>b.m;
cout<<"Second: ";
in>>b.s;
return in;
}

ostream &operator<<(ostream &in, time &b){//output operator overload
in<<b.h;
cout<<":";
in<<b.m;
cout<<":";
in<<b.s;
return in;
}


int main(){//main function
	time a,b,c;
	cout<<"Enter Time A: \n";
	cin>>a;
	cout<<"Enter Time B: \n";
	cin>>b;
	c=a+b;
	cout<<"Time A+ Time B = "<<c<<endl;


system("pause");}