#include<iostream>
using namespace std;
int main()
{
    int size;
    cout<<"Enter the size if array :"<<endl;
    cin>>size;

    int a[size];
    cout<<"Enter the element of array :"<<endl;
    for(int i=0;i<size;i++)
    {
        cin>>a[i];
    }

    for(int i=0;i<size;i++)
    {
        if(a[i]>0)
        {
            a[i]=1;
        }
        else
        {
            a[i]=0;

        }



    }


    cout<<"The replaced array is:"<<endl;
    for(int i=0;i<size;i++)
    {
        cout<<a[i]<<endl;
    }


    return 0;



}
