#include<iostream>

using namespace std;
class lamborgini{

    protected:
      int model;
      int year;
      int limit;

    public:
       int setmodel(int   m);
       int setyear(int y);
       int setlimit(int l);

       int  getmodel();
       int getyear();
       int getlimit();


       static int durbality;

};

int  lamborgini::setmodel(int  m)
{
   model=m;
}
int lamborgini::setyear(int y)
{
  year=y;

}
int lamborgini::setlimit(int l)
{
  limit=l;

}

int  lamborgini::getmodel()
{
    return model;
}
int lamborgini::getlimit()
{
    return limit;
}
int lamborgini::getyear()
{
    return year;
}

 int lamborgini::durbality=15;

 class huracan:public lamborgini
 {
    private:
    string edition ;
    string designer;


    public:
    huracan()
    {
        cout<<"default constructor"<<endl;
    }
    huracan(string e,string d);

    
    string getedition();
    string getdesigner();


 };

huracan::huracan(string e,string d)
{
    edition=e;
    designer=e;
}
//error constructor don't have return value
string huracan::getedition()
{
   
    return edition;

}
string huracan::getdesigner()
{
    return designer;
}

 int main()
{
    cout<<"main"<<endl;
    huracan f;
    f.setmodel(63);
    f.setyear(2004);
    f.setlimit(63);
    huracan("mansory","pagani");

    cout<<"The model is huracan having build no:"<<f.getmodel()<<endl;
    cout<<"Manufactured year is :"<<f.getyear()<<endl;
    cout<<"The limit of the car is:"<<f.getlimit()<<endl;
    cout<<" "<<endl;

    cout<<"The edition is :"<<f.getedition()<<endl;
    cout<<"the designer is:"<<f.getdesigner()<<endl;

    cout<<"Note : The Durablity of the cars is constantly "<<lamborgini::durbality<<endl;

    return 0;

    

}