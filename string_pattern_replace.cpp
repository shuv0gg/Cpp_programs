#include <iostream>
#include <string>

using namespace std;


void replaceFirstOccurrence(string& T, const string& P, const string& Q) {
    size_t pos = T.find(P);

    if (pos != string::npos) {

        string newText;


        for (size_t i = 0; i < pos; ++i) {
            newText += T[i];
        }


        newText += Q;


        for (size_t i = pos + P.length(); i < T.length(); ++i) {
            newText += T[i];
        }


        T = newText;
    }
}

int main() {
    string T, P, Q;


    cout << "Enter the text (T): ";
    getline(cin, T);

    cout << "Enter the pattern to find (P): ";
    getline(cin, P);

    cout << "Enter the replacement pattern (Q): ";
    getline(cin, Q);


    replaceFirstOccurrence(T, P, Q);


    cout << "Modified text: " << T << endl;

    return 0;
}

