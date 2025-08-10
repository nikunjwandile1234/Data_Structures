// count subarray with xor k ;

#include<bits/stdc++.h>
using namespace std;

int subarraywithk(vector<int>&v,int k)
{


 int xr=0;
 map<int,int>mpp;
 mpp[xr]++;
 int cnt=0;
 for(int i=0;i<v.size();i++)
 {
    xr=xr^v[i];
    //k

    int x=xr^k;
     cnt+=mpp[x];
     mpp[xr]++;

 }

 return cnt;

}


int main()
{
    vector<int> v;
    int k, n;
    cout << "enter k" << endl;
    cin >> k;

    cout << "enter number of elements" << endl;
    cin >> n;

    cout << "enter vector elements" << endl;
    for (int i = 0; i < n; ++i) {
        int x;
        cin >> x;
        v.push_back(x);
    }

    int result = subarraywithk(v, k);
    cout << "Number of subarrays with XOR " << k << " is: " <<result<<endl;
}
