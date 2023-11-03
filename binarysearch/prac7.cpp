#include <bits/stdc++.h>
using namespace std;
// very first elemt of array
int ffo_binaryS(int a[], int l, int r, int k)
{
    int res = -1;
    while (l < r)
    {
        int mid = 1 + (r - 1) / 2;

        if (a[mid] == k)
        {
            res = mid;
            r = mid - 1;
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

int flo_binaryS(int a[], int n, int k)
{
    int l = 0;
    int r = n - 1;

    int res = -1;

    while (l <= r)
    {
        int mid = l + (r - l) / 2;

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
            r = mid + 1;
        }
    }
    return res;
}
int main()
{
    int a[] = {1, 2, 4, 4, 4, 5, 6};
    int k = 4;
    int n = sizeof(a) / sizeof(a[0]);
    int first_index = ffo_binaryS(a, 0, n - 1, k);
    int last_index = flo_binaryS(a, n, k);

    int freqs;

    if (last_index == -1 || first_index == -1)
    {
        freqs = 0;
    }
    else
    {
        freqs = last_index - first_index + 1;
    }

    int freq = last_index - first_index + 1;

    cout << "The frequency of the element " << k << " is ==" << freq << endl;
    return 0;
}