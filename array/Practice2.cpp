#include <bits/stdc++.h>
using namespace std;
int main()
{

    int a[5] = {1, 2, 3, 4, 5};
    int value = 5;
    int count = 0;
    for (int i = 0; i < 5; i++)
    {
        for (int j = i + 1; j < 5; j++)
        {
            if (a[i] + a[j] == value)
            {
                count = count + 1;
            }
        }
    }
    cout << "The count of pairs having sum as " << value << " is " << count << endl;
}