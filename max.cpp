#include<iostream>

using namespace std;

class Max
{
    public:
    void fun(int a, int b)
    {
        if(a>b)
        {
            cout<<"first is greater\n";
        }
        else if(a==b)
        {
            cout<<"both are same \n";
        }
        else
        {
            cout<<"second is greater\n";
        }
    }
};

int main()
{
    int Num1=0,Num2=0;
    Max obj;
    cout<<"enter first number\n";
    cin>>Num1;


    cout<<"enter second number\n";
    cin>>Num2;


    obj.fun(Num1,Num2);

    return 0;
    
}