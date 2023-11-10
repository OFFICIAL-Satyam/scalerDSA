#include <bits/stdc++.h>
using namespace std;
int main()
{
    int a[] = {1, 44, 55, 7, 8};

    int b = 2;

    priority_queue<int, vector<int>, greater<int>> min_heap;

    for (auto i : a)
    {
        if (min_heap.size() < b)
        {
            min_heap.push(i);
        }

        else if (min_heap.top() < i)
        {
            min_heap.pop();
            min_heap.push(i);
        }
    }

    while (min_heap.size() != 0)
    {
        cout << min_heap.top() << " ";
        min_heap.pop();
    }
}