#include <iostream>
#include <vector>
#include <climits> 

using namespace std;

int maax(vector<vector<int>> &vec)
{
    int maxones = 0; 
    int maxonerows = -1;
    int columns = vec[0].size();

    for (int i = 0; i < vec.size(); i++)
    {
        int noofones = 0; 
        for (int j = 0; j < vec[i].size(); j++)
        {
            if (vec[i][j] == 1)
            {
                noofones++;
            }
        }
        
        
        if (noofones > maxones)
        {
            maxones = noofones;
            maxonerows = i;
        }
    }

    return maxonerows;
}

int main()
{
    int n, m;
    cout << "Enter the rows and columns of matrix" << endl;
    cin >> n >> m;

    vector<vector<int>> vec(n, vector<int>(m));

    cout << "Enter the Elements of Matrix (0s and 1s):" << endl;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            cin >> vec[i][j];
        }
    }

    int res = maax(vec);

    cout << "Row with maximum number of 1s: " << res << endl;

    return 0;
}
