#include <bits/stdc++.h>
using namespace std;
int printsum(int n)
{
    int sum = 0;
    for (int i = 1; i <= n; i++)
    {
        sum += i;
    }

    return sum;
}
int main()
{
    int n = 99;

    cout << "The sum of given n number is :" << printsum(n);
}
