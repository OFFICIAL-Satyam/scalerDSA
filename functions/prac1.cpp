#include <bits/stdc++.h>
using namespace std;
void range(int start, int end)
{
    while (start <= end)
    {
        cout << start << " ";
        start++;
    }
}

int main()
{
    int start = 5;
    int end = 10;
    range(start, end);
}