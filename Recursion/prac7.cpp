#include <bits/stdc++.h>
using namespace std;

int fibo(int n)
{
    if (n == 1)
    {
        return 1;
    }

    if (n == 2)
    {
        return 1;
    }

    return fibo(n - 1) + fibo(n - 2);
}
int main()
{
    int n = 4;

    cout << "The " << n << "th fibonacci number is: " << fibo(n) << endl;

    return 0;
}