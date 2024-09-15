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
        this->brand=brand;
        this->model=model;
        this->year=year;

    }

    car(car &temp)
    {

        cout<<"Constructor called:"<<endl;
        this->brand=temp.brand;
        this->model=temp.model;
        this->year=temp.year;

    }
    

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

    
};

int main()
{
    car c1("bmw","x5","2004");
    car c2("audi","rs5","2005");
    car c3(c2);
    

    cout<<c1.getbrand()<<" "<<endl<<c1.getmodel()<<" "<<endl<<c1.getyear()<<endl;
    cout<<"   "<<endl;
    cout<<c2.getbrand()<<" "<<endl<<c2.getmodel()<<" "<<endl<<c2.getyear()<<endl;
    cout<<"   "<<endl;
    cout<<c3.getbrand()<<" "<<endl<<c3.getmodel()<<" "<<endl<<c3.getyear()<<endl;

    return 0;

    



}