#include<iostream>
using namespace std;

void swap(int *x,int *y)
{
    int temp=*x;
    *x=*y;
    *y=temp;
    // swapped pointers 
}

int main()
{

    int x=50;
    int y=100;


    // pointers for refrencing ;

    int *ptr1=&x;
    int *ptr2=&y;

    swap(ptr1,ptr2);
    

    cout<<x<<endl;
    cout<<y<<endl;

    
}