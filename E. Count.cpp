#include <bits/stdc++.h>
using namespace std;
int main()
{
    string S;
    cin >> S;

    int sum = 0;

    for( char c : S)
    {
        // Convert character to its integer value and add it to sum
        sum += c - '0';  // '0' has an ASCII value of 48, so c - '0' gives the integer value
    }

    cout << sum <<endl;

    return 0;
}
