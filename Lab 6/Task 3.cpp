#include<iostream>//input output stream
using namespace std;//standerd namespace

class DISTANCE{//user define data type
	int d;
	
	public:
		
	DISTANCE(){d=0;}//constructor
	
	DISTANCE operator -(DISTANCE d2){//-operator overloading
		DISTANCE d3;
		d3.d=d-d2.d;
		if(d3.d>0){
			return d3;
		}
		else{
			cout<<"ERROR! Distance can't be negative:\n ";
			exit(0);
		}
	}
		friend istream &operator>>(istream &in,  DISTANCE &b);//input operator oveloading
	friend ostream &operator<<(ostream &in, DISTANCE &b);//output operator overload
	

};
istream &operator>>(istream &in, DISTANCE &d1){//input operator oveloading
	in>>d1.d;
	return in;
}

ostream &operator<<(ostream &in, DISTANCE &b){//output operator overload
	in<<b.d;
	return in;
}

int main(){
	DISTANCE d1,d2,d3;
	cout<<"Enter D1:";
	cin>>d1;
	cout<<"Enter D2:";
	cin>>d2;
	d3=d1-d2;
	cout<<"Difference between D1 and D2 is: "<<d3<<endl;
}