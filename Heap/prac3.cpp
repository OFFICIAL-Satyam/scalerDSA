#include <bits/stdc++.h>
using namespace std;
int main()
{
    int b[] = {1, 5, 7, 3, 80};
    int a = 2;
    int profit = 0;
    priority_queue<int> maxheap;
    for (auto i : b)
    {
        maxheap.push(i);
    }
    int curr = -1;
    while (a != 0)
    {
        curr = maxheap.top();
        profit += curr;
        maxheap.pop();

        maxheap.push(curr / 2);

        a--;
    }

    cout << "The maximum number of chocolates that you can eat is " << profit;

    return 0;
}