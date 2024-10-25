#include <bits/stdc++.h>
using namespace std;
int main()
{
    int T;
    cin >> T;

    // process each test case
    while(T--) {
        string S;
        cin >> S;

        // If the string length is more than 10, abbreviate it
        if( S.size() > 10){
            cout << S[0] << S.size() - 2 << S.back() <<endl;
        } else{
            cout << S <<endl;
        }

    }

    return 0;
}
