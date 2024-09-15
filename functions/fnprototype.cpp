#include<iostream>
using namespace std;

int add(int ,int );

int main()
{

    int c;
    c=add(5,5);
    cout<<c<<endl;
    return 0;
}

int add(int num1,int num2)
{
    int sum;
    sum=num1+num2;

    return sum;
}