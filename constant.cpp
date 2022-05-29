#include<iostream>
using namespace std;

class demo
{
    public:
      int i;
      static const int j;
      
      demo() 
      {
          i=10;
         // j=20;
      }
};

int const demo:: j=30;

int main()
{
    demo obj;
    cout<<demo::j;

  
    //const int i; //error  

    //const int j=10;  //allowed
    
    return 0;
}