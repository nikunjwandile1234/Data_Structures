#include<iostream>
using namespace std;
int main()
{
    float salary,gross_salary,hra,da;
    cout<<"Enter the basic salary of the employee"<<endl;
    cin>>salary;
    if(salary>=20000)
    {
        hra=salary*0.2;
        da=salary*0.8;
    }
    else if(salary>=20000)
    {
        hra=salary*0.25;
        da=salary*0.9;

    }
    else
    {
         hra=salary*0.3;
         da=salary*0.95;
    }
    gross_salary=salary*hra*da;
    cout<<"Gross salary of the employee is"<<gross_salary<<endl;
}