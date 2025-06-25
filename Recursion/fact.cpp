#include<bits/stdc++.h>
using namespace std;

void  sum1(int i,int sum)

{


    if(i<1)
   {
        cout<<"the sum is :"<<sum<<endl;
        return;

   }

   else
   {
         sum1(i-1,sum+i);
   }
}


int  sum2(int n)
{
    if(n == 0)
       return 0 ;
  return n+sum2(n-1);

}


int fact(int n)
{
    if (n == 0)
        return 1;


        return n*fact(n-1);
}

int main()
{
    int n;
    cout<<"enter n"<<endl;
    cin>>n;
   // sum1(n,0);


    

   // cout<<" the sum is :"<<sum2(n)<<endl;

   

   cout<<"the fact is :"<<fact(n)<<endl;



    return 0;

}