#include<iostream>
using namespace std;
int main()
{
    int a[]={1,2,3,4,5,};
    int b=sizeof(a);
    int c=b/sizeof(a[0]);
    cout<<"the size of array is "<<" "<<b<<endl;
    
    cout<<"the length of array is"<<" "<<c<<endl;


    return 0;
}
