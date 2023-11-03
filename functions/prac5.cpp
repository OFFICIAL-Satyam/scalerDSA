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
int main()
{
    int n = 11;

    int flag = checkprime(n);

    if (flag == 1)
    {
        cout << n << " is a prime number";
    }

    else
    {
        cout << n << " is not a prime number";
    }
}
