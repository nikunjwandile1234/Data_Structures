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

    /* no need of set as constructor can set the value of inputs in the function 

  string setbrand(string brand)
  {
    this->brand=brand;

  }

  string setmodel(string model)
  {
    this->model=model;

  }

  string setyear(string year)
  {
    this->year=year;
  }
*/

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
    car c2("audi","rs5","2004");

    cout<<c1.getbrand()<<" "<<endl<<c1.getmodel()<<" "<<endl<<c1.getyear()<<endl;
    cout<<c2.getbrand()<<" "<<endl<<c2.getmodel()<<" "<<endl<<c2.getyear()<<endl;


    return 0;

    

}