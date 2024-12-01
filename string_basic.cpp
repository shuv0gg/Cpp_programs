#include <iostream>

using namespace std;


int findLength(const char* str) {
    int length = 0;
    while (str[length] != '\0') {
        length++;
    }
    return length;
}


void copyString(char* S1, const char* S2) {
    int i = 0;
    while (S2[i] != '\0') {
        S1[i] = S2[i];
        i++;
    }
    S1[i] = '\0';
}


void concatenateStrings(char* S1, const char* S2) {
    int i = 0;

    while (S1[i] != '\0') {
        i++;
    }

    int j = 0;
    while (S2[j] != '\0') {
        S1[i] = S2[j];
        i++;
        j++;
    }
    S1[i] = '\0';
}


int compareStrings(const char* S1, const char* S2) {
    int i = 0;
    while (S1[i] != '\0' && S2[i] != '\0') {
        if (S1[i] != S2[i]) {
            return S1[i] - S2[i];
        }
        i++;
    }
    return S1[i] - S2[i];
}


void reverseString(char* str) {
    int length = findLength(str);
    int i = 0;
    int j = length - 1;
    while (i < j) {
        // Swap characters
        char temp = str[i];
        str[i] = str[j];
        str[j] = temp;
        i++;
        j--;
    }
}

int main() {
    char S1[100], S2[100];


    cout << "Enter string S: ";
    cin.getline(S1, 100);
    cout << "Length of S: " << findLength(S1) << endl;

    cout << "Enter string S2: ";
    cin.getline(S2, 100);
    copyString(S1, S2);
    cout << "After copying, S1: " << S1 << endl;


    cout << "Enter another string S2 to concatenate: ";
    cin.getline(S2, 100);
    concatenateStrings(S1, S2);
    cout << "After concatenation, S1: " << S1 << endl;


    cout << "Enter string S2 to compare with S1: ";
    cin.getline(S2, 100);
    int comparisonResult = compareStrings(S1, S2);
    if (comparisonResult == 0) {
        cout << "S1 and S2 are equal." << endl;
    } else if (comparisonResult < 0) {
        cout << "S1 is lexicographically smaller than S2." << endl;
    } else {
        cout << "S1 is lexicographically greater than S2." << endl;
    }


    cout << "Enter string to reverse: ";
    cin.getline(S1, 100);
    reverseString(S1);
    cout << "Reversed string: " << S1 << endl;

    return 0;
}
