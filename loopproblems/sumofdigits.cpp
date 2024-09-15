#include<iostream>
using namespace std;
int main()
{
    int n,lastdigit,sum=0;
    cout<<"enter n";
    cin>>n;

    while(n>0)
    {
        lastdigit=n%10;

        sum+=lastdigit;

        n=n/10;
    }

    cout<<sum<<endl;




}