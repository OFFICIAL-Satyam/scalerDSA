#include <bits/stdc++.h>
using namespace std;

int fe(int a[], int n)
{
    unordered_map<int, int> m;

    for (int i = 0; i < n; i++)
    {
        m[a[i]]++;
    }

    for (int i = 0; i < n; i++)
    {
        if (m[a[i]] > 1)
        {
            cout << "The element from the given array is ";
            return a[i];
        }
    }
    cout << "No element exists";
    return -1;
}
int main()
{
    int a[5] = {1, 2, 3, 4, 5};

    int n = sizeof(a) / sizeof(a[0]);

    cout << fe(a, n);

    return 0;
}