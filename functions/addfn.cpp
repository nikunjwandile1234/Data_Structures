#include<iostream>
using namespace std;

int add(int n1,int n2)
{
    int sum;
    sum=n1+n2;

    return sum;
}
int main()
{
    int c;
    int a;
    cout<<"a:"<<endl;
    cin>>a;
    int b;
    cout<<"b:"<<endl;
    cin>>b;
    
    c=add(a,b);
    cout<<"The addition is:"<<c<<endl;

    return 0;
}
