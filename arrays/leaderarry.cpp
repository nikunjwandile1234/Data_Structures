#include <iostream>
#include <vector>
#include <algorithm>
#include <climits>
using namespace std;

vector<int> superiorelements(vector<int> &nums) {
    vector<int> ans;
    int maxi = INT_MIN;
    int n = nums.size();

    for (int i = n - 1; i >= 0; i--) {
        if (nums[i] > maxi) {
            ans.push_back(nums[i]);
            maxi = nums[i];  
        }
    }

    reverse(ans.begin(), ans.end());
    return ans;
}

int main() {
    int n;
    cout << "Enter n: ";
    cin >> n;

    cout << "Enter elements: ";
    vector<int> v(n);
    for (int i = 0; i < n; i++) {
        cin >> v[i];
    }

    vector<int> leaders = superiorelements(v);
    cout << "Superior elements: ";
    for (int x : leaders) {
        cout << x << " ";
    }
    cout << endl;

    return 0;
}
