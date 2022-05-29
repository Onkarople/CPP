#include<iostream>
using namespace std;

class Base
{
    public:
        int x,y;

        virtual void fun()      // 1000
        {   cout<<"Base fun"<<"\n"; }
        virtual void gun()      // 2000
        {   cout<<"Base gun"<<"\n"; }
        void sun()          // 3000
        {   cout<<"Base sun"<<"\n"; }
        virtual void run()      // 4000
        {   cout<<"Base run"<<"\n"; }
};
class Derived : public Base
{
    public:
        int i,j;

        void fun()      // 5000
        {    cout<<"Derived fun"<<"\n"; }
        virtual void gun()  // 6000
        {    cout<<"Derived gun"<<"\n"; }
         void sun()     // 7000
        {    cout<<"Derived sun"<<"\n"; }
         virtual void mun()     // 8000
        {    cout<<"Derived mun"<<"\n"; }
};

int main()
{
    Derived dobj;
    //Base *bp = new Derived();   // Upcasting

    dobj.fun();
    dobj.gun();
    dobj.sun();
    dobj.run();

    //bp->fun();      // Derived fun
    //bp->gun();      // Derived gun
    //bp->sun();      // Base sun
    //bp->run();      // Base run
    // bp->mun();  // Error


    return 0;
}