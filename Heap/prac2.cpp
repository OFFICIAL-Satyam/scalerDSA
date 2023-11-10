#include <bits/stdc++.h>
using namespace std;
int main()
{
    int a[] = {1, 3, 5, 7, 9, 6};
    int b = 3;
    priority_queue<int> max_heap;
    for (auto val : a)
    {
        max_heap.push(val);
    }
    int sum = 0;

    while (b != 0)
    {
        sum += max_heap.top();

        max_heap.pop();

        b--;
    }

    cout << "Maximum profit is:- " << sum << endl;
    return 0;
}