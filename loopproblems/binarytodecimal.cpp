#include<iostream>
using namespace std;
int main()
{
 int n;
 cout<<"enter binary"<<endl;
 cin>>n;


int power=1;
 int decimal=0;
 while (n>0)
 {
    
    int lastdigit=n%10;
    decimal+=lastdigit*power;
    power*=2;

    n=n/10;

 }  

 cout<<"The decimal is:"<<decimal<<endl;

    return 0;
}
