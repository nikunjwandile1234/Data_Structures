#include<iostream>
using namespace std;

int index(string s,char c,int *first,int *last)
{
  for(int i=0; i<s.size();i++)
  {
    if(s[i]==c)
    {
       *first=i;
       break;
    }

   
  }

  for(int i=s.size()-1;i>0;i--)
  {
    if(s[i]==c)
    {
        *last=i;
        break;

    }
  }
}

int main()
{
    string s="aabbac";
    char c='a';

    int first=-1;
    int last=-1;


    int *ptr1=&first;
    int *ptr2=&last;

    index(s,c,ptr1,ptr2);

    cout<<*ptr1<<" "<<*ptr2<<endl;

    cout<<first<<" "<<last<<endl;
    
}