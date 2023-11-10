#include <bits/stdc++.h>
using namespace std;
int main()
{
    int a[] = {1, 2, 4, 5};
    int diff = 2;
    int x = -1;
    int y = -1;
    int flag = 0;
    unordered_map<int, int> m;
    for (int i = 0; i < 4; i++)
    {
        x = a[i];
        y = x - diff;

        if (m.find(y) != m.end())
        {
            flag = 1;
            cout << "1" << endl;
        }
        if (m.find(x) == m.end())
        {
            m[x]++;
        }
    }

    if (flag == 0)
    {
        cout << "0" << endl;
    }

    return 0;
}