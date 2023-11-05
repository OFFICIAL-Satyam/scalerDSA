#include <bits/stdc++.h>
using namespace std;
int main()
{
    stack<char> st;
    string s = "satyam";

    for (char c : s)
    {
        st.push(c);
    }

    int n = s.length();

    for (int i = 0; i < n; i++)
    {
        s[i] = st.top();
        st.pop();
    }

    cout << "The reverse order of the string is: " << s << endl;
}