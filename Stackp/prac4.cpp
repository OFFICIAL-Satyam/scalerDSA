#include <bits/stdc++.h>
using namespace std;
int main()
{
    string a = "(())";
    stack<char> s;

    for (int i = 0; i < 5; i++)
    {
        if (s.size() != 0 && s.top() == '(' && a[i] == ')')
        {
            s.pop();
        }
        else
        {
            s.push(a[i]);
        }
    }
    if (s.size() == 0)
    {
        cout << "Balanced";
    }
    else
    {
        cout << "Not Balanced";
    }
}