#include<iostream>
#include<vector>
using namespace std;
int main()
{
    int size;
    cout<<"Enter the size of vector:"<<endl;
    cin>>size;

    vector<int> v(size);
    cout<<"Enter the Elements of vector"<<endl;
    for(int i=0;i<v.size();i++)
    {
        cin>>v[i];
    }

    int x;
    cout<<"Enter the elements for the occurence"<<endl;
    cin>>x;
    int occurence=-1;
    for(int i=0;i<v.size();i++)
    {
      if(v[i]==x)
      {
        occurence=i;

      }
    }

    cout<<"The element of occurence is :"<<occurence<<endl;

    return 0;
}