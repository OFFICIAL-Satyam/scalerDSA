#include <bits/stdc++.h>
using namespace std;

void printarr(int a[], int size, int i)
{
    if (i == size)
    {
        return;
    }

    cout << a[i] << " ";

    printarr(a, size, i + 1);
}
int main()
{
    int a[6] = {1, 3, 4, 5, 6, 7};

    int n = sizeof(a) / sizeof(a[0]);

    cout << "the elements of the array are:-";

    printarr(a, n, 0);
}