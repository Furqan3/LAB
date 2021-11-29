#include<iostream>//header file


using namespace std;//standerd namespace

template<class T>//templete

//classs of huge int
class hugeint{
	
	//private
int size;
//pointer
T *array;
//public
public:
	
	//construncte
	hugeint(int x){
		size =x;
	//dynamic array
		array=new T[size];
	}
	
	//function for setting values of array
	void stvalue(){
		
		//input from user
		for(int i=0; i<size;i++){
			cout<<"Enter "<<i+1<<"th value: ";
			cin>>array[i];
		}
	}
	
	//dispaly data of array
	void output(){
		for(int i=0; i<size;i++){
			
			cout<<array[i]<<",";
		}
	}
	
	//distructer
	~hugeint(){
		//delete dynamic memory
		delete [] array;
	}
};

//main function
int main(){
	
	int x;
	cout<<" Enter array size: ";
	cin>>x;
	
	//integer
	cout<<"INTEGER!\n";
	
	//integer object
	hugeint <int>integer(x);
	//member function calling
	integer.stvalue();
	integer.output();
	
	//float
	cout<<"\n\n\nFLOAT!\n";
	//float object
	hugeint <float>Float(x);
	Float.stvalue();
	Float.output();
	
	//double
	cout<<"\n\n\nDOUBLE!\n";
	//double object
	hugeint <double>Double(x);
	Double.stvalue();
	Double.output();
	
}