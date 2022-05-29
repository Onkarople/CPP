#include<iostream>
using namespace std;


class demo
{
    public:
    
    void fun(int *p)
    {
        cout<<"fun\n";
    }

    void fun(float *p)
    {
        cout<<"float fun\n";
    }


    void fun(int no)
    {
        cout<<"int fun\n";
    }
};


int main()
{
     int no=11;
     float f=3.14;

    demo obj;

    obj.fun(no);
    obj.fun(&no);
    obj.fun(&f);

    return 0;

}