#include<iostream>//header file

using namespace std;//standerd namespace

template<class T>//template 

//function for finding avrage
T array_avrage(T array[],int size){
	T avg;
	
	for(int i=0;i<size;i++){
		avg=avg+array[i];
		
	}
	
	return avg/size;//return aerage
}

//main function
int main(){
	
	cout<<"INTEGER!\n"; 
	//integer array 
	int array_integer[6]={3,5,7,9,34,87};
	cout<<"AVRAGE = "<<array_avrage(array_integer,6)<<endl<<endl<<endl;
	
	
	cout<<"FLOAT!\n";
	
	//float array
	float array_float[6]={3.5,5.7,7.5,9.6,4.5,7.3};
	cout<<"AVRAGE = "<<array_avrage(array_float,6)<<endl<<endl<<endl;
	
	cout<<"DOUBLE!\n";
	
	//double array
	double array_double[6]={3.5345,5.5453,7.354345,9.34535,3.2342,87.34234};
	cout<<"AVRAGE = "<<array_avrage(array_double,6)<<endl<<endl<<endl;
	
	
	
	
}