#include <iostream>
#include <cmath>
using namespace std;

int board[20], n;

bool isSafe(int row, int col) {
    for (int prev = 1; prev < row; prev++) {
        if (board[prev] == col || abs(board[prev] - col) == abs(prev - row))
            return false;
    }
    return true;
}
void printSolution() {
    cout << "[ ";
    for (int i = 1; i <= n; i++) {
        cout << board[i] << " ";
    }
    cout << "]" << endl;
}
void solve(int row) {
    if (row > n) {
        printSolution();
        return;
    }
    for (int col = 1; col <= n; col++) {
        if (isSafe(row, col)) {
            board[row] = col;
            solve(row + 1);
        }
    }
}
int main() {
    cout << "Enter N: ";
    cin >> n;
    solve(1);
    return 0;
}
