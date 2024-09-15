#include<iostream>
#include<vector>
using  namespace std;

int main()
{
    int size;
    cout<<"Enter the size of vector"<<endl;
    cin>>size;

  vector<int>v(size);
  cout<<"Enter the elments of vector";
       for(int i=0;i<=size;i++)
       {
        cin>>v[i];

       }

       cout<<"The size of thr vector is :"<<v.size()<<endl;
       cout<<"the capacity of the vector is:"<<v.capacity()<<endl;



       int r;
       cout<<"Enter the value to resize:"<<endl;
       cin>>r;

       v.resize(r);

       int element;
       cout<<"Enter the element to push:"<<endl;
       cin>>element;

       v.push_back(element);

       for(int i=0;i<=v.size();i++)
       {
        cout<<v[i]<<" ";

       }
       
       cout<<endl;

       
       cout<<"The size of thr vector is :"<<v.size()<<endl;
       cout<<"the capacity of the vector is:"<<v.capacity()<<endl;





}
