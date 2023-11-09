// wap to print the number that is present in 2 out of 3 given array
#include <bits/stdc++.h>
using namespace std;
int main()
{
    int a[] = {1, 2, 3};
    int b[] = {4, 5, 6, 7, 8};
    int c[] = {2, 4, 5, 8};

    unordered_map<int, int> m;

    for (auto i : a)
    {
        m[i]++;
    }
    for (auto i : b)
    {
        m[i]++;
    }
    for (auto i : c)
    {
        m[i]++;
    }
    for (auto element : m)
    {
        if (element.second >= 2)
        {
            cout << element.first << " ";
        }
    }
}