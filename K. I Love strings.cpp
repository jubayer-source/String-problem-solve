#include <bits/stdc++.h>
using namespace std;
int main()
{
    int N;
    cin >> N;

    while(N--){
        string S, T;
        cin >> S >> T;

        string result = "";
        int minLength = min(S.size(), T.size());

        for( int i = 0; i <minLength; i++){
            result += S[i];
            result += T[i];
        }

        // Append any remaining characters from the longer string
        if(S.size() > minLength) {
            result += S.substr(minLength);
        } else if(T.size() > minLength){
            result += T.substr(minLength);
        }

        cout << result <<endl;
    }




    return 0;
}
