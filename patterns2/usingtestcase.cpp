// this is printing patterns using testcase
#include<iostream>
using namespace std;

void print( int &n)
{
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<n;j++)
        {
            cout<<"*";

        }

        cout<<endl;
    }
}

int main()
{

    int n;
    int t;
    cout<<"enter testcase"<<endl;
    cin>>t;

    for(int i=0;i<t;i++)
    {
          cin>>n;
          print(n);
    }
}