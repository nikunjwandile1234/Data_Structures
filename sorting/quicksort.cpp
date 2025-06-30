#include<bits/stdc++.h>
using namespace std;


int partition(vector<int>& arr, int low, int high)
{
    int pivot = arr[low];
    int i = low;
    int j = high;

    while (i < j)
    {
        while (arr[i] <= pivot && i <= high)
        {
            i++;
        }

        while (arr[j] > pivot && j >= low)
        {
            j--;
        }
        if (i < j)
        {
            swap(arr[i], arr[j]);
        }
    }

    swap(arr[low], arr[j]);

    return j;
}

void quick_sort(vector<int>& arr, int low, int high)
{
    if (low < high)
    {
        int part = partition(arr, low, high);
        quick_sort(arr, low, part - 1);
        quick_sort(arr, part + 1, high);
    }
}

int main()
{
    int n;
    cout<<"enter n"<<endl;
    cin>>n;

    vector<int>arr(n);
    cout<<"enter array elements"<<endl;

    for(int i=0;i<n;i++) cin>>arr[i];
    quick_sort(arr,0,n-1);
    cout<<"the sorted array is:"<<endl;
    for(int i=0;i<n;i++) cout<<arr[i]<<endl;

    return 0;
}
