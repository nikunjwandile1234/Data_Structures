#include<iostream>
using namespace std;
class car
{
    private:
   
   string brand;
   string model;
   string year;

   public:
  
    car(string brand,string model,string year)
    {
        cout<<"constructor called"<<endl;
        this->brand=brand;
        this->model=model;
        this->year=year;

    }

    car(car &audi)
    {

        cout<<"Constructor called:"<<endl;
        this->brand=audi.brand;
        this->model=audi.model;
        this->year=audi.year;

    }

    static int durablity;
    

    string getbrand()
  {
    return brand;

  }

  string getmodel()
  {
   
    return model;

  }

  string getyear()
  {
     return year;
  }

  ~car()
  {

    cout<<"Destructor called :"<<endl;


  }

    
};

int car::durablity=15;

int main()
{
    car c1("bmw","x5","2004");

    car c2("audi","rs5","2004");

    cout<<c1.getbrand()<<" "<<endl<<c1.getmodel()<<" "<<endl<<c1.getyear()<<endl;
    cout<<" "<<endl;
    cout<<c2.getbrand()<<" "<<endl<<c2.getmodel()<<" "<<endl<<c2.getyear()<<endl;


     cout<<"  "<<endl;
     c1=c2;

    cout<<c1.getbrand()<<" "<<endl<<c1.getmodel()<<" "<<endl<<c1.getyear()<<endl;
    cout<<"  "<<endl;
    cout<<c2.getbrand()<<" "<<endl<<c2.getmodel()<<" "<<endl<<c2.getyear()<<endl;

    cout<<"  "<<endl;

    cout<<"The durablity of all the cars are :"<<car::durablity<<endl;
    
}