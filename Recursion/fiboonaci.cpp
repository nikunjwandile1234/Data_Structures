#include<bits/stdc++.h>
using namespace std;


int fiboo(int n)
{
    if(n<=1)
    {
          return n;
    }
         else
         {
         int last=fiboo(n-1);
         int slast=fiboo(n-2);
         return last+slast;
         }

}



int main()
{


    int n;
    cout<<"Enter n"<<endl;
    cin>>n;


    cout<<"the nth fiboonaci is:"<<fiboo(n);

    return 0;
}