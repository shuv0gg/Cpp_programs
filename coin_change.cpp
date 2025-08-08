#include <bits/stdc++.h>
using namespace std;

int main() {
    int N;
    long long M;
    cin >> N >> M;
    vector<long long> coins(N);
    for (int i = 0; i < N; i++) cin >> coins[i];

    long long count = 0;
    for (int i = 0; i < N; i++) {
        if (M >= coins[i]) {
            count += M / coins[i];   // take as many as possible
            M %= coins[i];           // reduce the amount
        }
    }

    if (M == 0) cout << count << endl;
    else cout << -1 << endl;

    return 0;
}
