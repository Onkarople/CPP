#include<iostream>
using namespace std;

class demo
{
    public:
       int x;
       int y;

       demo(int i=0 , int j=0)
       {
          x=i;
          y=j;
       }
     
};

demo operator + (demo op1,demo op2)
{
    cout<<"Inside \n";
    demo dobj(op1.x+op2.x , op1.y + op2.y);
    return dobj;
    //return demo(op1.x + op2.x , op1.y + op2.y);
}

int main()
{
    demo obj1(11,10);
    demo obj2(20,30);
    demo robj(0,0);

    robj = obj1 + obj2;
    cout<<robj.x<<"\n";
    cout<<robj.y<<"\n";

    return 0;

}