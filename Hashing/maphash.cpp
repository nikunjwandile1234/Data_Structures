#include<bits/stdc++.h>
using namespace std;


int main()
{
    int n;
    cout<<"enter n"<<endl;
    cin>>n;

    int arr[n];


    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }


    //precompute
     map<int,int>mpp;
    for(int i=0;i<n;i++)
    {
        mpp[arr[i]]++;
    }

   cout<<"this is key value pair for frequency:"<<endl;
    for(auto it:mpp)
    {
        cout<<it.first<<"->"<<it.second<<endl;
    }

    //fetching 

    int q;
    cin>>q;

    while(q--)
    {
        int number;
        cin>>number;
        cout<<"the frequency of elements: "<<mpp[number]<<endl;
    }



     return 0;
}