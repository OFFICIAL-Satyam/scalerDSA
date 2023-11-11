#include <bits/stdc++.h>
using namespace std;

void selectionsort(int a[], int n)
{
    cout << "The array before sorting is :";
    for (int i = 0; i < n; i++)
    {
        cout << a[i] << " ";
    }

    for (int i = 0; i < n; i++)
    {
        int min = a[i];
        int idx = i;

        for (int j = i + 1; j < n; j++)
        {
            if (a[j] < min)
            {
                min = a[j];
                idx = j;
            }
        }
        int temp = a[i];
        a[i] = a[idx];
        a[idx] = temp;
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

    selectionsort(a, n);

    return 0;
}