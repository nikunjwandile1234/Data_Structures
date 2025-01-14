#include<iostream>
using namespace std;

int main()
{
    int x;
    int *ptr=&x;
    cout<<"the size of x is:"<<sizeof(x)<<endl;
    cout<<ptr<<" "<<(ptr+1)<<endl;

    cout<<ptr<<" "<<(ptr-1)<<endl;
    // array in pointer address
     //post increment order 
    int arr[2]={1,2};
    int *ptra=&arr[0];
    int *ptrb=&arr[1];
    cout<<ptra<<" "<<*ptra<<endl;
    cout<<ptra++<<" "<<*ptra<<endl;
    cout<<ptrb;
    
    cout<<(*ptra)++<<endl;
    cout<<arr  [0]<<endl;

    //four variants of postfix and prefix operators;
    cout<<*ptra++<<endl;
    cout<<(*ptra)++<<endl;
    cout<<*++ptra<<endl;
    cout<<++*ptra<<endl;
}