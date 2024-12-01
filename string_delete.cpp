
#include <iostream>
#include <string>

using namespace std;

void deleteFirstOccurrence(string &T, const string &P) {
    size_t pos = T.find(P);

    if (pos != string::npos) {
        T.erase(pos, P.length());
    } else {
        cout << "Pattern not found in the text!" << endl;
    }
}

int main() {
    string T, P;


    cout << "Enter the text T: ";
    getline(cin, T);

    cout << "Enter the pattern P to delete: ";
    getline(cin, P);




    cout << "Modified text: " << T << endl;

    return 0;
}
