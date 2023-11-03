#include <bits/stdc++.h>
using namespace std;

int linearsearch(int a[], int n, int k)
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
    int a[9] = {1, 2, 3, 4, 5, 6, 7, 8, 9};
    int k = 9;

    int n = sizeof(a) / sizeof(a[0]);

    int index = linearsearch(a, n, k);

    cout << "The element " << k << " is present at index " << index << endl;

    return 0;
}