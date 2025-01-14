#include<iostream>
using namespace std;
int main()
{


    int x=10;
    float z=5.5;
    void *ptr=&x;
    ptr=&z;

    cout<<ptr<<endl;
    // it is a generic pointer which can point to any type of data type
    // it is called as void pointers
    return 0;
    //it cant be derefrenced
    // solution is to do typecating 

    int *intptr=(int*)ptr;
    cout<<*intptr<<endl;
     
}