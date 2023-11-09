// this is program for anagram

#include <bits/stdc++.h>
using namespace std;
int main()
{
    string a[] = {"aba", "baa", "bab", "cba"};
    unordered_map<string, vector<int>> m;

    string s;

    for (int i = 0; i < 4; i++)
    {
        s = a[i];
        sort(s.begin(), s.end());
        m[s].push_back(i);
    }

    for (auto elem : m)
    {
        for (auto j : elem.second)
        {
            cout << j << " ";
        }

        cout << endl;
    }

    return 0;
}