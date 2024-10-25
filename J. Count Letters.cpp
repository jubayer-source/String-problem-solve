#include <bits/stdc++.h>
using namespace std;
int main()
{
    string S;
    cin >> S;

    int count[26] = {0};

    for( char c : S)
    {
        count[ c - 'a']++;
    }

    for( int i = 0; i < 26; i++){
        if(count[i] > 0) {
            cout << char(i + 'a') << " : " << count[i] <<endl;
        }
    }

    return 0;
}
