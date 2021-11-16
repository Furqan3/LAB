#include <iostream>
using namespace std;
class hugeint{
    int size;
    int *array;

    public:

    hugeint(int s){
        size=s;
        array=new int[size];
        for(int i=0;i<size;i++){
            array[i]=0;
        }

    }

     hugeint(hugeint &a){
        size=a.size;
        array=new int[size];
        for(int i=0;i<size;i++){
            array[i]=a.array[i];
        }
    }





    void user_input(){
        for(int i=0;i<size;i++){
           
            input:
            int x;
            cout<<"Enter value of Place "<<i+1<<": ";
            cin>>x;
            if(x>=0 && x<=9){
                array[i]=x;

            }
          
            else{
                cout<<"You are only allowed to values between 0-9!\n ";
                goto input;
            }
            cout<<"\n";
        }
    }


    void output(){

        for(int i=0;i<size;i++){
            cout<<array[i];
        }
        cout<<"\n";
    }

    bool isequal(hugeint b){
        int x=1;
        for(int i=0;i<size;i++){
            if (array[i]==b.array[i])
            {
                x++;
            }
            else{}
            
        }
        if(x==size){return true;}
        else{return false;}

    }
    bool izero(){
        int x=1;
        for(int i=0;i<size;i++){
            if (array[i]==0)
            {
                x++;
            }
            else{}
            
        }
        if(x==size){return true;}
        else{return false;}
    }


    bool izero(hugeint b){
        int x=1;
        for(int i=0;i<size;i++){
            if (array[i]==b.array[i])
            {
                x++;
            }
            else{}
            
        }
        if(x==size){return true;}
        else{return false;}
    }


    void add(hugeint b){
       cout<<" Addition: ";
       for(int x=0;x<size;x++){
           cout<<array[x]+b.array[x];
           
       }
        

    }

    ~hugeint(){
        delete [] array;
    }

};