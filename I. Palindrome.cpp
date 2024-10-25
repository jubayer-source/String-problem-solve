#include <bits/stdc++.h>
using namespace std;
int main()
{
    string S;
    cin >> S;

    //create a reversed version of S;
    string reversed = S;
    reverse(reversed.begin(), reversed.end());

    // compare with origin version
    if( S == reversed)
    {
        cout << "YES" <<endl;
    }
    else{
        cout << "NO" <<endl;
    }
    return 0;
}
