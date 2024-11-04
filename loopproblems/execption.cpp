#include<iostream>
using namespace std;

int main()
{

    int a,b,c;

    cout<<"Enter a"<<endl;
    cin>>a;
    cout<<"Enter b"<<endl;
    cin>>b;
  try
  {
     c=a/b;
}
  
  catch(exception e)
  {
    std::cerr << e.what() <<endl;
  }
  
    

    cout<<"the answer is:"<<c<<endl;
}