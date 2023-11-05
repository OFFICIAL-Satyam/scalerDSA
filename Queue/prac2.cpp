#include <bits/stdc++.h>
using namespace std;
int main()
{
    int a[] = {1, 3, 5, 7, 9};

    stack<int> s1;
    for (int i = 0; i < 5; i++)
    {
        s1.push(a[i]);
    }

    stack<int> s2;
    while (!s1.empty())
    {
        s2.push(s1.top());
        s1.pop();
    }
    cout << "The stack elements are :";
    while (!s2.empty())
    {
        cout << s2.top() << " ";
        s2.pop();
    }
}