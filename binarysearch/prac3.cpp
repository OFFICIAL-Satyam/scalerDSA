#include <bits/stdc++.h>
using namespace std;

int binarySearch(int a[], int l, int r, int k)
{
    if (l <= r)
    {
        int mid = l + (r - 1) / 2;

        if (a[mid] == k)
        {
            return k;
        }

        else if (a[mid] > k)
        {
            return binarySearch(a, l, mid - 1, k);
        }

        else
        {
            return binarySearch(a, mid + 1, r, k);
        }
    }

    return -1;
}

int main()
{
    int a[] = {1, 2, 3, 6, 7, 9, 15};
    int k = 7;

    int n = sizeof(a) / sizeof(a[0]);

    int index = binarySearch(a, 0, n - 1, k);

    cout << "The element " << k << " is present at index  " << index << endl;

    return 0;
}