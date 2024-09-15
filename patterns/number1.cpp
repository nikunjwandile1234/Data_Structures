#include<iostream>
using namespace std;
int main()
{
    int n,i,j;
    cout<<"Enter n"<<endl;
    cin>>n;

    for(i=1;i<=n;i++)
    {
        for(j=1;j<=n;j++)
        {
            if(i==1||j==1||i==n||j==n)
            {
            cout<<j;

            }
            else
            {
                cout<<" ";

            }

        }
        cout<<endl;
    }
    return 0;
}
