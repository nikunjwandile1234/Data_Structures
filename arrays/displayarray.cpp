#include<iostream>
using namespace std;
int main()
{
    int size;
    cout<<"Enter the size of array";
    cin>>size;
    int a[size];
    cout<<"Enter the elements of array";
    for(int i=0;i<=size;i++)
    {
        cin>>a[i];

    }

     for(int i=0;i<=size;i++)
     {
        cout<<"The elements  of array is:"<<a[i]<<endl;
     }
}