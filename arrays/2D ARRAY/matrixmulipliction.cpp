#include<iostream>
using namespace std;


int main()
{
    int r1,c1;
    cout<<"Enter The size of Rows AND Columns of matrix 1:"<<endl;
    cin>>r1>>c1;

    int M1[r1][c1];
    cout<<"Enter the Elements of 1 st matrix:"<<endl;

    for(int i=0;i<r1;i++)
    {
        for(int j=0;j<c1;j++)
        {
            cin>>M1[i][j];
        }
    }


    int r2,c2;
    cout<<"Enter the size of Rows and columns of matrix 2:"<<endl;
    cin>>r2>>c2;

    int M2[r2][c2];

      for(int i=0;i<r2;i++)
    {
        for(int j=0;j<c2;j++)
        {
            cin>>M2[i][j];
        }
    }

    if(c1!=r2)
       cout<<"Matrix Multiplication is not possible for input"<<endl;
      // for the matrix multiplication possiblitb y ;

      int M3[r1][c2];

      for(int i=0;i<r1;i++)
      {
        for(int j=0;j<c2;j++)
        {
            int ansval=0;
            for(int k=0;k<r2;k++)
            {
                ansval+=M1[i][k]*M2[k][j];
            }

            M3[i][j]=ansval;
        }
      }
    

    for(int i=0;i<r1;i++)
      {
        for(int j=0;j<c2;j++)
        {
             cout<<M3[i][j]<<" ";
        }
        cout<<endl;
      }


}