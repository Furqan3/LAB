#include<iostream>//header file

using namespace std;//standred namspace

template<class T>//templete


//function for swaping numbers
void Swap(T &a, T &b){
	T c=a;
	a=b;
	b=c;
}


//main function
int main(){

//integers
	cout<<"INTEGER!\n";
	int a,b;

//input from user
	cout<<"Enter A:";
	cin>>a;
	cout<<"Enter B:";
	cin>>b;
	
	//number before swap
	cout<<"BEFORE SWAP:";
	cout<<"\t\tA = "<<a<<",   B = "<<b<<endl;
	
	//swaping function calling
	Swap(a,b);
	
	//numbers after swap
	cout<<"AFTER SWAP :";
	cout<<"\t\tA = "<<a<<",   B = "<<b<<endl<<endl<<endl;



	//floats
	cout<<"FLOAT!\n";
	float x,y;                                                                                       

	//taking float fron user
	cout<<"Enter X:";
	cin>>x;
	cout<<"Enter Y:";
	cin>>y;
	
	//float number before swap
	cout<<"BEFORE SWAP:";
	cout<<"\t\tX = "<<x<<",   Y = "<<y<<endl;
	
	//swaping function called
	Swap(x,y);
	
	//float number swap
	cout<<"AFTER SWAP :";
	cout<<"\t\tX = "<<x<<",   Y = "<<y<<endl<<endl<<endl;
	
	
	//double 
	cout<<"DOUBLE!\n";
	
		double c,d;


	//taking double input from user
	cout<<"Enter C:";
	cin>>c;
	cout<<"Enter D:";
	cin>>d;
	
	//double before swap
	cout<<"BEFORE SWAP:";
	cout<<"\t\tC = "<<c<<",   D = "<<d<<endl;
	
	//swapping function calling
	Swap(c,d);
	
	//double after swap
	cout<<"AFTER SWAP :";
	cout<<"\t\tC = "<<c<<",   D = "<<d<<endl<<endl<<endl;
}