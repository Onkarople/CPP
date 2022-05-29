#include<iostream>

using namespace std;

int Sum(int iNo)
{
   int iSum=0;
   int iCnt=0;

   for(iCnt=1;iCnt<=iNo;iCnt++)
   {
       iSum=iSum+iCnt;

   }
    
    return iSum;
}

int main()
{ 

   int iValue=0;
   int iRet=0;
   cout<<"eneter the number\n";
   cin>>iValue;

    iRet=Sum(iValue);

    cout<<iRet;

    return 0;


}
