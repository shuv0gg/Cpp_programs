#include <iostream>
#include <string>
#include <cctype>

using namespace std;

// Function to count the occurrences of each letter in the input text
void countLetterOccurrences(const string& text) {

    int letterCount[26] = {0};


    for (char ch : text) {

        if (isalpha(ch)) {

            ch = tolower(ch);


            letterCount[ch - 'a']++;
        }
    }


    cout << "Letter occurrences in the input text:\n";
    for (int i = 0; i < 26; ++i) {
        if (letterCount[i] > 0) {
            cout << char('a' + i) << ": " << letterCount[i] << endl;
        }
    }
}

int main() {
    string text;


    cout << "Enter the text: ";
    getline(cin, text);


    countLetterOccurrences(text);

    return 0;
}
