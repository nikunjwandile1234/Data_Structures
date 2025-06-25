#include<iostream>
using namespace std;


int main()
{
    string s;
    cout<<"enter string"<<endl;
    cin>>s;

   //precompute
    int hash[26]={0};
    for(int i=0;i<s.size();i++)
    {
        hash[s[i]-'a']++;
    }


    //fetch

    int q;
    cin>>q;

    while(q--)
    {
        char ch;
        cin>>ch;

        cout<<"the frequency is :"<<hash[ch-'a']<<endl;
    }
}