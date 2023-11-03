#include <bits/stdc++.h>
using namespace std;
int main()
{
    int a[5] = {1, 2, 3, 4, 5};
    // int n = a.size();
    int l = 0;
    int r = 4;
    while (l < r)
    {
        // swap a[l] and a[r]
        int temp = a[l];
        a[l] = a[r];
        a[r] = temp;
        l++;
        r--;
    }
    for (int i = 0; i < 5; i++)
    {
        cout << a[i] << " ";
    }
}