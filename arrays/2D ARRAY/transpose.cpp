#include<iostream>
using namespace std;

int main()
{
    int n,m;
    cout<<"Enter the rows and columns and Matrix:"<<endl;
    cin>>n>>m;

    int M1[n][m];
    cout<<"Enter the Elements of matrices:"<<endl;
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<m;j++)
        {
            cin>>M1[i][j];
        }
    }
     cout<<"The matrix Elements are:"<<endl;
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<m;j++)
        {
            cout<<M1[i][j]<<" ";
        }
        cout<<endl;
    }

    int transpose[m][n];
    for(int i=0;i<m;i++)
    {
        for(int j=0;j<n;j++)
        {
            transpose[i][j]=M1[j][i];
        }
    }

    cout<<"The Transpose Elements are :"<<endl;
    for(int i=0;i<m;i++)
    {
        for(int j=0;j<n;j++)
        {
           cout<<transpose[i][j]<<" ";
        }
        cout<<endl;
    }

}