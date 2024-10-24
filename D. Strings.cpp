#include <bits/stdc++.h>
using namespace std;
int main()
{

    string A, B;
    cin >> A >> B;

    cout << A.size() << " " << B.size() <<endl;

    cout << A + B << endl;

    // Swap the first characters of A and B
    char temp = A[0];
    A[0] = B[0];
    B[0] = temp;

    // output the modified A and B;
    cout << A << " " << B <<endl;




    return 0;
}
