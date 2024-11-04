#include<iostream>
using namespace std;

int main()
{
    int x;
    int y;

    cout<<&x<<endl;
    cout<<&y<<endl; 


    int *ptr;
    cout<<"the address is:"<<ptr<<endl;

    int marks =90;
    ptr=&marks;

    cout<<"the address id:"<<ptr<<endl;

   // dereferencing ;
    cout<<"The value in address is:"<<*ptr<<endl;

    // changing value of variable using pointer
    *ptr=50;
    //updates values
    cout<<"The marks is :"<<marks<<endl;
    cout<<"the marks is: "<<*ptr<<endl;


   //storing value of pointer into new variable;

   int vx=*ptr;
   cout<<"marks are:"<<vx<<endl;
}
