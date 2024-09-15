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
      int max=a[0];

    for(int i=0;i<=size;i++)
    {
     if(a[i]>max)
     {
        max=a[i];
     }
    }

    cout<<"The maximum number is:"<<max<<endl;

    return 0;
}