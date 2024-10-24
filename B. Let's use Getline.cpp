#include <bits/stdc.h++>

using namespace std;

int main() {

    string S;
    getline(cin, S);

    // Find the first occurrence of '\'
    size_t pos = S.find('\\');

    // Output the substring from the beginning to the first '\'
    if (pos != string::npos) {
        cout << S.substr(0, pos) << endl;
    }

    return 0;
}
