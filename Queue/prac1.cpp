#include <bits/stdc++.h>
using namespace std;
int main()
{
    int a[] = {1, 3, 5, 7, 9};
    queue<int> q;
    for (int i = 0; i < 5; i++)
    {
        q.push(a[i]);
    }

    cout << "The queue elements are : ";
    while (!q.empty())
    {
        cout << q.front() << " ";
        ;
        q.pop();
    }
}