#include <iostream>
using namespace std;
int main()
{
    int size;
    cout << "Enter the size of array" << endl;
    cin >> size;

    char vowels[size];
    cout << "Enter the vowels:";

    // for(int i=0;i<=size;i++)
    // {
    //     cin>>vowels[i];

    // }

    // for(int i=0;i<=size;i++)
    // {
    //     cout<<vowels[i];

    // }

    for (char &ele : vowels)
    {
        cin >>ele;
    }

    for (int i=0;i<=size;i++)
{
        cout <<vowels[i]<< endl;

    return 0;
}


}