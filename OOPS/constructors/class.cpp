#include<iostream>
using namespace std;
class car
{
   public:

   string name;
   int year;

   string brand;

};

int main()
{
    car c1;
    c1.name="X5";
    c1.year= 2007;
    c1.brand="BMW";


    cout<<c1.name<<endl;
    cout<<c1.year<<endl;
    cout<<c1.brand<<endl;

}
