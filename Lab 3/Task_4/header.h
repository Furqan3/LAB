#include <iostream>
using namespace std;

class polynomial{// making class
int degree=0;//degree
double *coff=new double[degree];//dynamic array
public:
polynomial(int x=0){//constructer
    degree=x;
}
 
void input(){ //input function
    for (int i =degree; i >=0; i--)
    {
        cout<<"Enter coff of x^"<<i<<": ";
        int x;
        cin>>x;
        coff[i]=x;
    }
    }
    void add(polynomial a){//add function
        cout<<"\n\nADD!\n";

         for (int i =degree; i >=0; i--)
    {
        int x=a.coff[i]+coff[i];
        if(x>0){
            cout<<" + "<<x<<"x^"<<i; 
        }
        else if(x<0){
            cout<<" - "<<x<<"x^"<<i; 
        }
        else{}
        
       
    }
    }

     void subtract(polynomial a){//subtract function
        cout<<"\n\nSUBTRACT!\n";

         for (int i =degree; i >=0; i--)
    {
        int x=a.coff[i]-coff[i];
        if(x>0){
            cout<<" + "<<x<<"x^"<<i; 
        }
        else if(x<0){
            cout<<"  "<<x<<"x^"<<i; 
        }
        else{}
        
       
    }
    }
    void  multiply(polynomial a){//multiplying function
        cout<<"\n\nMultiply!\n";
        
     
        
    }

    ~polynomial(){//distrusted
        delete [] coff;//deleting dynamic array

    }

};
