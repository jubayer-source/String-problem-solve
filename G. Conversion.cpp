#include <bits/stdc++.h>
using namespace std;
int main()
{
    string S;
    cin >> S;

    // Iterate through each character and perform transformations
    for( int i = 0; i < S.size(); i++) {
        if(S[i] == ','){
            //replace comma with space
            cout << ' ';
        } else if(isupper(S[i])){
            cout << (char)tolower(S[i]);
        } else if(islower(S[i])){
            cout << (char)toupper(S[i]);
        } else {
            cout << S[i];
        }
    }
    cout << endl;

    return 0;
}
