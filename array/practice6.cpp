//  Adding two matrices
#include <bits/stdc++.h>
using namespace std;
int main()
{
    int a[4][2] = {{1, 2}, {3, 4}, {5, 6}, {7, 8}};

    int b[4][2] = {
        {5, 6},
        {7, 8},
        {1, 2},
        {1, 2},
    };

    int sum[4][4];

    for (int i = 0; i < 4; i++)
    {
        for (int j = 0; j < 2; j++)
        {
            sum[i][j] = a[i][j] + b[i][j];
        }
    }

    cout << "The matrix obtained by adding the matrix is :" << endl;
    for (int i = 0; i < 4; i++)
    {
        for (int j = 0; j < 2; j++)
        {
            cout << sum[i][j] << " ";
        }
        cout << endl;
    }
}