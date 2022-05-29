#include<iostream>

using namespace std;

class Base
{
    public:
      int i,j;

      
         virtual void fun()
        {
            cout<<"inside base fun";
        }
};


class derived : public Base
{
   public:
       int k;

       void fun()
       {
           cout<<"derived fun";
       }

};

int main()
{
    
    Base *ptr= new derived();

    ptr->fun();


    return 0;

}