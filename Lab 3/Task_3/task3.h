#include <iostream>//Header File
using namespace std;//samespace


class task3{
    static int counter;
    int obj=1;
    public:
    task3(){//constructer
        obj=++counter;
       
    }
    void obj_no(){//member function for displaying obj number
         cout<<"i m "<<obj<<" object\n";
    }
  int  total_obj(){//member function fo total objs

        return counter;
    }
};
int task3::counter=0;