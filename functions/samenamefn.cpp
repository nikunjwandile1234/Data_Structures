#include<iostream>
using namespace std;
int add(int num1,int num2)
{
    int sum;
    sum=num1+num2;
    return sum;

}

int add(int num1,int num2,int num3)
{
    int sum;
    sum=num1+num2+num3;

    return sum;
}


int main()
{
    

    int  c=add(2,2);
    cout<<"the addition is :"<<c<<endl;
    return 0;

}
