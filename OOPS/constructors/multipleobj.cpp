#include<iostream>
using namespace std;
class car
{
    public:
    

    string brand;
    string name;
    string year;

};


int main()
{
    car c1;
    car c2;
    

    c1.name="X5";
    c1.brand="BMW";
    c1.year="2007";

    cout<< c1.name<<endl;
    cout<< c1.brand <<endl;
    cout<< c1.year<<endl;

    cout<<"size:"<<sizeof(c1)<<endl;
    cout<<"string len:"<<c1.name .length()<<endl;
    cout<<"string len:"<<c1.brand.length()<<endl;
    cout<<"string len:"<<c1.year .length()<<endl;

    cout<<"   "<<endl;
    c2.name="RS5";
    c2.brand="AUDI";
    c2.year="2007";

   cout<<c2.name<<endl;
   cout<<c2.brand<<endl;
   cout<<c2.year<<endl;
    cout<<"size:"<<sizeof(c2)<<endl;
    cout<<"string len:"<<c2.name .length()<<endl;
    cout<<"string len:"<<c2.brand .length()<<endl;
    cout<<"string len:"<<c2.year .length()<<endl;

}