#include<iostream>
using namespace std;
int main()
{
    int a,b;
    cout<<"Enter a and b"<<endl;
    cin>>a>>b;


    int result=1;
    for(int i=1;i<=b;i++)
    {
        result=result*a;
    }

    cout<<result<<endl;


    return 0;
}

