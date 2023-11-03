#include <bits/stdc++.h>
using namespace std;
int main()
{
    int number = 548;

    int n = number;

    int sum = 0;

    while (n != 0)
    {
        int digit = n % 10;

        sum += digit;

        n /= 10;
    }

    cout << "The sum of number " << number << " is " << sum << endl;
}