#include <bits/stdc++.h>
using namespace std;
int findmin(int a[], int size, int i, int mn)
{
    if (i == size)
    {
        return mn;
    }

    mn = min(mn, a[i]);

    return findmin(a, size, i + 1, mn);
}

int main()
{
    int a[] = {-1, 2, 4, 6, 9};

    int n = sizeof(a) / sizeof(a[0]);

    int mn = a[0];
    ;

    cout << "The minimum element in the array is " << findmin(a, n, 0, mn) << endl;
}