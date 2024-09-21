#include<iostream>
#include<vector>
#include<bits/stdc++.h>
using namespace std;

int rotateArray(vector<vector<int>> &V)
{
     //1.transpose
     //2.reverse

     int n=V.size();

     for(int i=0;i<n;i++)
     {
        for(int j=0;j<i;j++)
        {
            swap(V[i][j],V[j][i]);
        }
     }
     //reverse
     for(int i=0;i<n;i++)
     {
            reverse(V[i].begin(),V[i].end());
     }

     
}

int main()
{
    int n;
    cout<<"Enter The DIMENSION of Square Matrix:"<<endl;
    cin>>n;//it us a square matrix;


    vector<vector<int>> V(n,vector<int>(n));
    cout<<"Enter The Elements of Vector:"<<endl;

    for(int i=0;i<n;i++)
    {
        for(int j=0;j<n;j++)
        {
            cin>>V[i][j];
        }
    }
    cout<<"The Original Matrix is:"<<endl;
      for(int i=0;i<n;i++)
    {
        for(int j=0;j<n;j++)
        {
            cout<<V[i][j]<<" ";
        }

        cout<<endl;
    }


    rotateArray(V);
    cout<<"The Elements of Matrix After 90 degress:"<<endl;
     for(int i=0;i<n;i++)
    {
        for(int j=0;j<n;j++)
        {
            cout<<V[i][j]<<" ";
        }

        cout<<endl;
    }

}