
#include <iostream>
using namespace std;

int main() {
    int n, pos, element;


    cout << "Enter the number of elements in the array: ";
    cin >> n;


    int arr[n];


    cout << "Enter " << n << " elements: ";
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }


    cout << "Enter the position to insert the element (0 to " << n << "): ";
    cin >> pos;


    if (pos < 0 || pos > n) {
        cout << "Invalid position!" << endl;
        return 0;
    }


    cout << "Enter the element to insert: ";
    cin >> element;


    for (int i = n; i > pos; i--) {
        arr[i] = arr[i - 1];
    }


    arr[pos] = element;

    n++;


    cout << "Array after insertion: ";
    for (int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;

    return 0;
}
