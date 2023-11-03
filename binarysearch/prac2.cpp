#include <bits/stdc++.h>
using namespace std;

int linearsearch(int a[], int i, int n, int k)
{
    if (i == n)
    {
        return -1;
    }

    if (a[i] == k)
    {
        return i;
    }

    return linearsearch(a, i + 1, n, k);
}
int main()
{
    int a[] = {
        1,
        3,
        5,
        8,
        15,
        20};

    int k = 15;

    int n = sizeof(a) / sizeof(a[0]);

    int index = linearsearch(a, 0, n, k);

    cout << "The element " << k << " is present at index " << index << endl;

    return 0;
}