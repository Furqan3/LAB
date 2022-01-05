    #include"TV.h"
    #include"remote.h"
    


int main(){
   
        TV t;
   
        remote r;
  
       r.setchannel(t,25);
        system("pause");
      system("cls");
  
        r.Volumeup();
    system("pause");
       system("cls");
    
        r.Volumedown();
      system("pause");
      system("cls");
    
        r.setting(t);
      system("pause");
     system("cls");
    
        r.setmode(t);
     system("pause");
    system("cls");
        TV g=t;
        
        r.setchannel(g,25);
     system("pause");
    system("cls");
   
        r.Volumeup();
     system("pause");
     system("cls");
   
        r.Volumedown();
    system("pause");
     system("cls");
   
        r.setting(g);
      system("pause");
       system("cls");

        remote s=r;
    
        s.setting(g);
        
        
    }