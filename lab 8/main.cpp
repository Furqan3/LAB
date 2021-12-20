#include<iostream>
#include<string>

using namespace std;

class shape{
	protected:
	int dim;
public:
	shape(int x){dim=x;}
	virtual void getinput()=0;
	virtual void display()=0;

};

class dim2 : public shape{
public:
	dim2(int x): shape(x){}

	virtual double area()=0;
	virtual double perimeter()=0;
};



class dim3 : public shape{
public:
	dim3(int x): shape(x){}

	virtual double surface_area()=0;
	virtual double volume()=0;
};



class square:public dim2{
public:
	square(int x): dim2(x){}
	void getinput(){cout<<"Enter length of any side of square: ";
	cin>>dim;
	}
	double area(){return dim*dim;}
	double perimeter(){return 4*dim;}
	double cost(){
	double x;
	cout<<"Enter cost per unit area: ";
	cin>>x;
	return x;
	}
	void display(){
	cout<<"Total cost= "<<cost()*area()<<"/_"<<endl;
	cout<<"Area= "<<area()<<endl;
	cout<<"Perimeter= "<<perimeter()<<endl;

	}
};


class circle:public dim2{

public :
	circle(int x): dim2(x){}

	void getinput(){cout<<"Enter radius of the circle: ";
	cin>>dim;
	}
	double area(){
		double pi=3.14;
		return pi*(dim*dim);}

	double perimeter(){
		double pi=3.14;
		return 2*(pi*dim);}

	double cost(){
	double x;
	cout<<"Enter cost per unit area: ";
	cin>>x;
	return x;
	}

	void display(){
	cout<<"Total cost= "<<cost()*area()<<"/_"<<endl;
	
	cout<<"Area= "<<area()<<endl;
	cout<<"Circumference= "<<perimeter()<<endl;
	}
	
	};



class sphare:public dim3{

public:
	sphare(int x): dim3(x){}

	void getinput(){cout<<"Enter radius of the sphare: ";
	cin>>dim;}

		double surface_area(){
		double pi=3.14;
		return 4*(pi*(dim*dim));}

	double volume(){
		double pi=3.14;
		return ((4/3)*(pi*(dim*dim*dim)));}

	void display(){

	cout<<"Area= "<<surface_area()<<endl;
	cout<<"Circumference= "<<volume()<<endl;}
	
};



class cube:public dim3{
	
public:
	cube(int x): dim3(x){}


	void getinput(){cout<<"Enter length of any one side of cube: ";
	cin>>dim;}

		double surface_area(){
		double pi=3.14;
		return 6*(dim*dim);}

	double volume(){
		double pi=3.14;
		return dim*dim*dim;}

	void display(){

	cout<<"Area= "<<surface_area()<<endl;
	cout<<"Circumference= "<<volume()<<endl;}
	
};



int main(){
	dim2 *list2d[1];
	dim3 *list3d[1];
	
	list2d[0]= new circle(2);
	list2d[1]=new square(2);
	list3d[0]=new cube(3);
	list3d[1]=new sphare(3);

	cout<<"2 DIMENSION: \n";
	cout<<"Circle:\n";
	list2d[0]->getinput();
	list2d[0]->display();

	cout<<"\n\nsquare: \n";
	list2d[1]->getinput();
	list2d[1]->display();

	cout<<"\n\n3 DIMENSION: \n";
	cout<<"cube\n";
	list3d[0]->getinput();
	list3d[0]->display();

	cout<<"\n\nsphare:\n";
	list3d[1]->getinput();
	list3d[1]->display();

    delete [] list2d;
    delete [] list3d;
	system("pause");
	return 0;}