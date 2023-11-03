#include <bits/stdc++.h>
using namespace std;
int binarySearch(int a[], int n, int l, int r, int k)
{
    int res = -1;
    while (l <= r)
    {
        int mid = 1 + (r - 1) / 2;
        if (a[mid] == k)
        {
            res = mid;
            l = mid + 1;
        }
        else if (a[mid] > k)
        {
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
    int a[] = {1, 4, 4, 4, 6};
    int k = 4;

    int n = sizeof(a) / sizeof(a[0]);

    int index = binarySearch(a, n, 0, n - 1, k);
    cout << "The last occurence of element " << k << " i : " << index << endl;

    return 0;
}