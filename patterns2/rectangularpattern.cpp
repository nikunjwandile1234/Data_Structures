// outer loop id for loops 
//inner is for columns  
// observe it and connect it to rows as possible 

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
    cout<<"enter n";
    cin>>n;
    print(n);

    cout<<"without using function"<<endl;
    for(int i=0;i<4;i++)
    {
        for(int j=0;j<4;j++)
        {
            cout<<"*";
        }

        cout<<endl;
    }

    return 0;
    //pattern printed;
}
