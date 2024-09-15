#include<iostream>
using  namespace std;
int main()
{

int size;
cout<<"Enter the size of array :"<<endl;
cin>>size;

int a[size];
cout<<"Enter the elments of array:"<<endl;

for (int i=0;i<=size;i++)
{
  cin>>a[i];

}

int sum=0;

for(int i=0;i<=size;i++)
{
    sum+=a[i];

}

cout<<"The sum of all the elements are :"<<sum<<endl;

}