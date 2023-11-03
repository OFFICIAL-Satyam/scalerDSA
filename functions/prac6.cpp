#include <bits/stdc++.h>
using namespace std;

int checkprime(int n)
{
    for (int i = 2; i < n; i++)
    {
        if (n % i == 0)
        {
            return 0;
        }
    }

    return 1;
}

void countPrime(int a[], int n)
{
    int Prime_count = 0;
    for (int i = 0; i < n; i++)
    {
        int flag = checkprime(a[i]);
        Prime_count += flag;
    }

    cout << "The number of prime elements present in the array is " << Prime_count << endl;
}
int main()
{
    int a[] = {2,
               3,
               5,
               9,
               10};
    int n = sizeof(a) / sizeof(a[0]);

    countPrime(a, n);
}