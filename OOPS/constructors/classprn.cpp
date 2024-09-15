#include<iostream>
using namespace std;
class cseb
{
   private :
    string prn;
    string dob;
    string mob;
    string bloodgroup;

    public:

    string setprn(string prn)
    {
        this->prn=prn;
    }

    string setdob(string dob)
    {
        this->dob=dob;

    }

    string setmob(string mob)
    {
        this->mob=mob;
    }

    string setbloodgroup(string bloodgroup)
    {
        this->bloodgroup=bloodgroup;
    }


    string getprn()
    {
        return prn;

    }

    string getdob()
    {
        return dob;
    }

    string getmob()
    {
        return mob;
    }

    string getbloodgroup()
    {
        return bloodgroup;
    }
};
int main()
{
    cseb aditya;
    cseb nikunj;

    aditya.setprn("22UCS085");
    aditya.setdob("9 MAY 2004");
    aditya.setmob("8467393839");
    aditya.setbloodgroup("A+");


    nikunj.setprn("22UCS137");
    nikunj.setdob("27 NOV 2004");
    nikunj.setmob("8459753564");
    nikunj.setbloodgroup("AB+");

    


    cout<<aditya.getprn()<<endl;
    cout<<aditya.getdob()<<endl;
    cout<<aditya.getmob()<<endl;
    cout<<aditya.getbloodgroup()<<endl;
    
    cout<<"  "<<endl;

    cout<<nikunj.getprn()<<endl;
    cout<<nikunj.getdob()<<endl;
    cout<<nikunj.getmob()<<endl;
    cout<<nikunj.getbloodgroup()<<endl;

}