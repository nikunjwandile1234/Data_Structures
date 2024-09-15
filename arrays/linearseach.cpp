#include <iostream>
using namespace std;
int main()
{
    int size;
    cout << "enter the size of array:" << endl;
    cin >> size;

    int a[size];
    cout << "Enter the element of array" << endl;
    for (int i = 0; i <= size; i++)
    {
        cin >> a[i];
    }

    int key;
    cout << "Enter Element To Find" << endl;
    cin >> key;
    int ans;
    for (int i = 0; i < size; i++)
    {
        if (a[i] == key)
        {
            ans = i;
        }
    }

    cout << "The Index is Found at Position :" << ans << endl;

    return 0;
}