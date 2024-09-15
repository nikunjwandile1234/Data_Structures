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

    int sume=0;
    int sumo=0;

    for(int i=0;i<v.size();i++)
    {
        if(i%2==0)
        {
            sume+=v[i];
        }

        else
        {
            sumo+=v[i];
        }
    }

    int diffrence=0;
    diffrence=sume-sumo;


    cout<<"The diffrence is"<<diffrence<<endl;

    return 0;
}