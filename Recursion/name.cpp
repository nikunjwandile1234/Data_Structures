#include<bits/stdc++.h>
using namespace std;

void name(int i,int n)
{  

     
     if(i>n)
        return;
     cout<<"nikunj"<<endl;
     cout<<" "<<endl;

     name(i+1,n);
}

void printn(int i,int n)
{
    if(i>n)
      return;
   cout<<i<<endl;


   printn(i+1,n);

}

void reverse(int i,int n)
{
    if(i<1)
        return;

        cout<<i<<endl;
        reverse(i-1,n);


}

void printn1(int i,int n)
{
    if(i<1)
     return;

     printn1(i-1,n);
     cout<<i<<endl;


}

void reverse2(int i,int n)
{
    if(i>n)
     return;

     reverse2(i+1,n);
     cout<<i<<endl;


}

int main()
{

    int n,i;

      //1
    
//     cout<<"enter interation"<<endl;
//     cin>>n;
//     name(i,n);

//  return 0;

 //2

// cout<<"enter n"<<endl;
// cin>>n;

// printn(i,n);

// return 0;
//3

// cout<<"enter n"<<endl;
// cin>>n;

// i=n;


//    reverse(i,n);


//    return 0;
//4
//    cout<<"enter n"<<endl;
//    cin>>n;

//    i=n;

//    printn1(i,n);

//5
   cout<<"enter n"<<endl;
   cin>>n;
   i=1;
   

   reverse2(i,n);

   

}