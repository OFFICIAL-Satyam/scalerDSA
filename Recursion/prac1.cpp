// recursion is a function that call its self
// solving a problem using smaller instances of the same problem

// print number in decreasing order
#include <bits/stdc++.h>
using namespace std;

void printrecurcive(int n)
{
    if (n == 0)
    {
        return;
    }

    cout << n << " ";

    printrecurcive(n - 1);
}
int main()
{
    int n = 19;
    printrecurcive(n);
}