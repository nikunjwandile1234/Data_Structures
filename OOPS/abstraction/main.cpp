#include<iostream>
#include"ex.h"
using namespace std;
int main()
{
 lamborgini f;
    f.setmodel(63);
    f.setyear(2004);
    f.setlimit(63);
    

    cout<<"The model is huracan having build no:"<<f.getmodel()<<endl;
    cout<<"Manufactured year is :"<<f.getyear()<<endl;
    cout<<"The limit of the car is:"<<f.getlimit()<<endl;
    cout<<" "<<endl;

    //cout<<"The edition is :"<<f.getedition()<<endl;
   // cout<<"the designer is:"<<f.getdesigner()<<endl;

    cout<<"Note : The Durablity of the cars is constantly "<<lamborgini::durbality<<endl;

    return 0;

}