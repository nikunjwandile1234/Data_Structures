#include<iostream>
using namespace std;
 
 void ptr(int *arr,int n)
 {
    for(int i=0;i<n;i++)
    {
         cout<<arr[i]<<endl;
    }

    *(arr+1)=20;

 }

 int main()
 {
    int arr[3]={5,1,3};

    ptr(arr,3);
    cout<<" "<<endl;
    for(int i=0;i<3;i++)
    {
         cout<<arr[i]<<endl;
    }



 }