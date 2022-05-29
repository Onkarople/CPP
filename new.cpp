#include<iostream>

using namespace std;

int main()
{
    int  size=0;
    int Arr[size];



    //p = (int *)malloc(sizeof(int)* 5);
    cout<<"enete the size \n";
    cin>>size;

    int *p = NULL;


    p = new int[size];

    cout<<"sizeof array is"<<sizeof(Arr)<<"\n";

   
    if(p == NULL)
    {
        cout<<"Unable to allocate the memory\n";
    }
    else
    {
        cout<<"Memory gets allocated succesfully at address : "<<p<<"\n";
    }

    // free(p);

    delete []p;

    return 0;
}