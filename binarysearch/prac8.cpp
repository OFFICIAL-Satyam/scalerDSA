#include <bits/stdc++.h>
using namespace std;

int solvebs(int a[], int n, int k)
{
    int l = 0;
    int r = n - 1;

    int res = -1;

    while (l <= r)
    {
        int mid = l + (r - l) / 2;

        if (a[mid] == k)
        {
            l = mid + 1;
        }

        else if (a[mid] > k)
        {
            res = a[mid];
            r = mid - 1;
        }

        else
        {
            l = mid + 1;
        }
    }

    return res;
}

int main()
{
    int a[] = {1, 4, 4, 4, 5, 8, 9};
    int k = 4;

    int n = sizeof(a) / sizeof(a[0]);
    int val = solvebs(a, n, k);

    cout << "The smallest element greater than  " << k << " is " << val << endl;
    return 0;
}