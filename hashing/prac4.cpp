#include <bits/stdc++.h>
using namespace std;
int main()
{
    int a[] = {1, 5, 7, 6, 4};
    int sum = 9;

    int x = -1;
    int y = -1;
    unordered_map<int, int> m;
    for (int i = 0; i < 5; i++)
    {
        x = a[i];
        y = sum - x;

        if (m.find(y) != m.end())
        {
            cout << i << " " << m[y] << endl;
            break;
        }
        if (m.find(x) == m.end())
        {
            m[x] = i;
        }
    }

    return 0;
}