#include <bits/stdc++.h>
using namespace std;

int linearSearch(int a[], int n, int k)
{
    int count = 0;
    for (int i = 0; i < n; i++)
    {
        if (a[i] == k)
        {
            count = count + 1;
        }
    }
    return count;
}

int main()
{
    int a[] = {1, 2, 4, 4, 4, 5};
    int k = 4;
    int n = sizeof(a) / sizeof(a[0]);
    int freq = linearSearch(a, n, k);
    if (freq == 0)
    {
        cout << "-1: it is not present " << endl;
    }
    else
    {
        cout << "the element  " << k << " is present " << freq << " number of times" << endl;
    }

    return 0;
}