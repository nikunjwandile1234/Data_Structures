#include<iostream>
using namespace std;
int main()
{
    int arr[4]={10,11,12,13};
    int *ptr=&arr[0];

    cout<<ptr<<" "<<arr<<" "<<*ptr<<" "<<*arr<<endl;
    //using array as pointer
    // arithmetic 

    cout<<*(arr+1)<<" "<<*(arr+2)<<endl; 


}