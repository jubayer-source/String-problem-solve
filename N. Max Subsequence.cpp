#include <bits/stdc++.h>
using namespace std;

int main() {
    int N;
    cin >> N;
    string S;
    cin >> S;

    int max_length = 0;
    char last_char = '-1'; // Initialize with a non-character

    for (char ch : S) {
        if (ch != last_char) {
            max_length++; // Increment for a new character in the alternating pattern
            last_char = ch; // Update the last added character
        }
    }

    cout << max_length << endl;
    return 0;
}
