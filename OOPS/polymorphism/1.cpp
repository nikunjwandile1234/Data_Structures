#include<iostream>
using namespace std;
class A
{
   public:
   virtual void show()
   {
    cout<<"suyash"<<endl;
   }

};

class B : public A
{
    public:
    void show(){
        cout<<"Nikunj"<<endl;
    }
};

int main(){
    A *a;
    B b;
    a=&b;
    a->show();
}