#include<bits/stdc++.h>
using namespace std;




int main()
{
    int n;
    cout<<"enter n"<<endl;
    cin>>n;

    int arr[n];
    cout<<"enter array elements"<<endl;
   
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
       
    }


    //precompute


    int hash[15]={0};
    for(int i=0;i<n;i++)
    {
        hash[arr[i]]+=1;
    }


    //fetching query

    int q;
    cin>>q;

    while(q--)
    {
        int number;
        cin>>number;

        //fetch
        cout<<"the frequency is :"<<hash[number]<<endl;

        
    }
}