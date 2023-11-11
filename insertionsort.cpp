#include <bits/stdc++.h>
using namespace std;
void insertionSort(int a[], int n)
{
    cout << "The array before sorting is :";
    for (int i = 0; i < n; i++)
    {
        cout << a[i] << " ";
    }

    for (int i = 0; i < n; i++)
    {
        int key = a[i];

        int j = i - 1;

        while (j >= 0 && a[j] > key)
        {
            a[j + 1] = a[j];
            j--;
        }

        a[j + 1] = key;
    }

    cout << "The array after sorting is :";
    for (int i = 0; i < n; i++)
    {
        cout << a[i] << " ";
    }
}

int main()
{
    int a[] = {3, 2, 1, 5, 7, 9, 8};

    int n = sizeof(a) / sizeof(a[0]);

    insertionSort(a, n);

    return 0;
}