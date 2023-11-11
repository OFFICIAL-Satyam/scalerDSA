#include <bits/stdc++.h>
using namespace std;
void bubblesort(int a[], int n)
{
    cout << "The array before sorting is :";
    for (int i = 0; i < n; i++)
    {
        cout << a[i] << " ";
    }

    for (int i = 0; i < n - 1; i++)
    {
        for (int j = 0; j < n - 1 - i; j++)
        {
            if (a[j] > a[j + 1])
            {
                int temp = a[j];
                a[j] = a[j + 1];
                a[j + 1] = temp;
            }
        }
    }

    cout << "The array after sorting is :";
    for (int i = 0; i < n; i++)
    {
        cout << a[i] << " ";
    }
}

int main()
{
    int a[] = {3, 6, 2, 1, 7, 4};
    int n = sizeof(a) / sizeof(a[0]);

    bubblesort(a, n);
}