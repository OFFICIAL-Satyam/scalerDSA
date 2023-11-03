#include <bits/stdc++.h>
using namespace std;
void printreverse(int a[], int size, int i)
{
    if (i == -1)
    {
        return;
    }

    cout << a[i] << " ";

    printreverse(a, size, i - 1);
}
int main()
{
    int a[] = {1, 2, 3, 4, 5, 6, 7, 8, 9};

    int n = sizeof(a) / sizeof(a[0]);
    int current = n - 1;
    cout << "The elements in reverse order are  ";
    printreverse(a, n, current);
}