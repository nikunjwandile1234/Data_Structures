#include<iostream>
using namespace std;

int main()
{
    int x;
    int y;

    cout<<"enter x and y"<<endl;
    cin>>x>>y;

     int *ptrx=&x;
     int *ptry=&y;

     *ptrx=*ptrx+*ptry;

     cout<<"the addition is:"<<*ptrx<<endl;

     // new result pointer;

     int result;

     int *result_ptr=&result;

     *result_ptr=*ptrx+*ptry;
     cout<<"the addition is:"<<*result_ptr<<endl;
     cout<<result<<endl;

}