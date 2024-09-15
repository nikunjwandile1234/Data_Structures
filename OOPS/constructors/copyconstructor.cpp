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

    car(car &audi)
    {

        cout<<"Constructor called:"<<endl;
        this->brand=audi.brand;
        this->model=audi.model;
        this->year=audi.year;

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


  ~car()
  {
    cout<<"Destructor called"<<endl;
  }

    
};

int main()
{
    car c1("bmw","x5","2004");
    car c2(c1);
    

    cout<<c1.getbrand()<<" "<<endl<<c1.getmodel()<<" "<<endl<<c1.getyear()<<endl;
    cout<<"   "<<endl;
    cout<<c2.getbrand()<<" "<<endl<<c2.getmodel()<<" "<<endl<<c2.getyear()<<endl;


    return 0;

    



}