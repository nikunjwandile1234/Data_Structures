#include<iostream>
using namespace std;
class  car
{
private:
    string name;
    string year;
    string brand;

public:
  string setname(string name);
  string setyear(string year);
  string setbrand(string brand );

  string getname();
  string getyear();
  string getbrand();


  car()
  {
    cout<<"Default constructor called :(with object creation :)"<<endl;

    
  }

};
//getter,setter to access the private;
string car::setname(string n)
{
    name=n;
}

string car::setyear(string y)
{
    year=y;
}

string car::setbrand(string b)
{
    brand=b;
}

string car::getname()
{
    return name;
}

string car::getyear()
{
    return year;
}

string car::getbrand()
{
    return brand;
}

int main()
{
    car c1;
    car c2;
//car c1 for object c1;
//car c2 for object c2;


    c1.setname("X5");
    c1.setyear("2004");
    c1.setbrand("BMW");

    c2.setname("RS5");
    c2.setyear("2004");
    c2.setbrand("AUDI");

  //  getter for  getting value ;
    cout<<c1.getname()<<endl;
    cout<<c1.getyear()<<endl;
    cout<<c1.getbrand()<<endl;
    cout<<"  "<<endl;
    
    cout<<c2.getname()<<endl;
    cout<<c2.getyear()<<endl;
    cout<<c2.getbrand()<<endl;
    
}
