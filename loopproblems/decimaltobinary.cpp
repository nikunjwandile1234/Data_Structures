#include<iostream>
using namespace std;
int main()
{
    int n;
    cout<<"Enter decimal";
    cin>>n;

    int binary=0;
    int parity;
    int power=1;
    while(n>0)
    {
        parity=n%2;
        binary+=parity*power;
        power*=10;
        n=n/2;



    }

    cout<<binary<<endl;

    return 0;
}