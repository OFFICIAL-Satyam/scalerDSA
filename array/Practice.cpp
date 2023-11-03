// Online C++ compiler to run C++ program online
#include <bits/stdc++.h>
using namespace std;
int main()
{
    int a[10] = {1, 2, 8, 16, 24, 42, 5, 7, 15, 10};
    int count = 0;
    for (int i = 0; i < 10; i++)
    {
        if (a[i] % 2 == 0)
        {
            count = count + 1;
        }
    }
    cout << "The count of the even number is  = " << count;
}