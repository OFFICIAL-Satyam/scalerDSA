#include <bits/stdc++.h>
using namespace std;

int binarySearch(int a[], int l, int n, int k)
{
    for (int i = 0; i < n; i++)
    {
        if (a[i] == k)
        {
            return i;
        }
    }

    return -1;
}

int main()
{
    int a[] = {1, 2, 4, 4, 6, 7, 8};

    int k = 4;

    int n = sizeof(a) / sizeof(a[0]);

    int index = binarySearch(a, 0, n - 1, k);

    cout << "The first index value of " << k << " is " << index << endl;

    return 0;
}