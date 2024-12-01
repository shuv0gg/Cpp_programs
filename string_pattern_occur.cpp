#include <iostream>
#include <string>

using namespace std;


int findPatternIndex(const string& S, const string& P) {
    int m = S.length();
    int n = P.length();


    if (n > m) {
        return -1;
    }


    for (int i = 0; i <= m - n; ++i) {
        int j = 0;


        while (j < n && S[i + j] == P[j]) {
            ++j;
        }


        if (j == n) {
            return i;
        }
    }

    return -1;
}

int main() {
    string S, P;


    cout << "Enter the main string (S): ";
    getline(cin, S);
    cout << "Enter the pattern string (P): ";
    getline(cin, P);


    int index = findPatternIndex(S, P);


    if (index != -1) {
        cout << "Pattern found at index: " << index << endl;
    } else {
        cout << "Pattern not found." << endl;
    }

    return 0;
}
