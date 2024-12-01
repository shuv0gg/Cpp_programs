
#include <iostream>
#include <string>

using namespace std;

void insertString(string &T, const string &S, int K) {

    if (K < 0 || K > T.length()) {
        cout << "Invalid position!" << endl;
        return;
    }


    T.insert(K, S);
}

int main() {
    string T, S;
    int K;


    cout << "Enter the text T: ";
    getline(cin, T);

    cout << "Enter the string S to insert: ";
    getline(cin, S);

    cout << "Enter the position K: ";
    cin >> K;


    insertString(T, S, K);


    cout << "Modified text: " << T << endl;

    return 0;
}
