#include <bits/stdc++.h>
using namespace std;
int main()
{
    int T;
    cin >> T;

    // Process each test case
    while (T--) {
        string S;
        cin >> S;

        bool isGood = false;

        // Check for the presence of "010" or "101" in the string
        for( int i = 0; i < S.size() - 2; i++)
        {
            if( S.substr(i, 3)== "010" || S.substr( i, 3) == "101") {
                isGood = true;
                break;
            }

        }
        if(isGood){
            cout << "Good" <<endl;
        } else {
            cout << "Bad" <<endl;
        }
    }

    return 0;
}
