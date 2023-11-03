// the count of even elements and odd elemenet in array
#include <bits/stdc++.h>
using namespace std;

void countEven(int a[], int n)
{
    int even_count = 0;
    int odd_count = 0;
    for (int i = 0; i < n; i++)
    {
        if (a[i] % 2 == 0)
        {
            even_count++;
        }
        else
        {
            odd_count++;
        }
    }

    cout << "The count of odd numbers:" << odd_count << endl;
    cout << "The count of even numbers:" << even_count << endl;
}
int main()
{
    int a[] = {1, 2, 3, 4, 5};
    int n = sizeof(a) / sizeof(a[0]);

    countEven(a, n);
}