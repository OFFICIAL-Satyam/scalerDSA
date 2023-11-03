#include <bits/stdc++.h>
using namespace std;

void printinc(int current, int n)
{
    if (current == n + 1)
    {
        return;
    }

    cout << current << " ";

    printinc(current + 1, n);
}

int main()
{
    int n = 6;

    int current = 1;

    printinc(current, n);
}