#include <bits/stdc++.h>
using namespace std;
int main()
{
    string S;
    cin >> S;

    string target = "hello";
    int j = 0; // pointer for target "hello"

    for(char ch : S) {
        if( ch == target[j]){
            j++; // move to the next character in hello sequence
        }
        if( j == target.size()) {
            cout << "YES" <<endl;
            return 0;
        }
    }

    // if we exit the loop without finding "hello"
    cout << "NO" <<endl;


    return 0;
}
