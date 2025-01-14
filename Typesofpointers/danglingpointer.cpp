#include<iostream>
using namespace std;

int main()
{
    int *ptr=NULL;
    {
        int x=10;
        ptr=&x;

    }
    // it points to the address of the variable x which is local to the block
    // this is called as dangling pointers
    
    cout<<*ptr<<endl;
}