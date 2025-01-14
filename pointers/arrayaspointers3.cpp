#include<iostream>
using namespace std;

int main()
{
    int arr[3]={2,3,4};
    // storing whole array address in one space;
    // whole pointer points to array base address
    int (*ptr)[3]=&arr;
    cout<<ptr<<" "<<arr<<" "<<*ptr<<" "<<*arr<<endl;

}