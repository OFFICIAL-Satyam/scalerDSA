#include <bits/stdc++.h>
using namespace std;
int main()
{
    stack<int> st;
    int n = 345;
    int digit = 0;
    while (n != 0)
    {
        digit = n % 10;
        st.push(digit);
        n = n / 10;
    }

    int reverse = 0;
    int multiplier = 1;
    int temp = 0;

    while (!st.empty())
    {
        digit = st.top();
        st.pop();
        temp = digit * multiplier;
        reverse = reverse + temp;
        multiplier = multiplier * 10;
    }

    cout << "The reverse of the given number is = " << reverse << endl;
}