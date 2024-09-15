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
    bool sortedflag=true;

    for(int i=1;i<v.size();i++)
    {
        if(v[i]<=v[i-1])
        {
            sortedflag=false;
            cout<<"The array is not sorted"<<endl;
        }


    }

     cout<<sortedflag;
}   