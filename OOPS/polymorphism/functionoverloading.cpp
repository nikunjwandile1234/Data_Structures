#include<iostream>
using namespace std;
class A
{
    private:
     int a,b,c;
    public:

    void show()
    {
        cout<<"The Base name"<<endl;
    }

    int add(int &a,int &b)
    {
        return a+b;
    }

    int add(int &a,int &b,int &c)
    {
        return a+b+c;
    }

};