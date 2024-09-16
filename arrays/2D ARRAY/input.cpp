#include<iostream>
using namespace std;


int main()
{
    int n,m;
    cout<<"Enter the size of rows and cols"<<endl;
    cin>>n>>m;


    int array[n][m];

    cout<<"Enter the Elements of 2d array"<<endl;

    for(int i=0;i<n;i++)
    {
        for(int j=0;j<m;j++)
        {
            cin>>array[i][j];
        }
    }


    cout<<"The elements of array are :"<<endl;

    for(int i=0;i<n;i++)
    {
        for(int j=0;j<m;j++)
        {
            cout<<array[i][j]<<" ";
        }cout<<endl;
        
    }

    
}