#include <bits/stdc++.h>
using namespace std;

#define pi pair<int, int>

int main()
{
    int n, e;
    cin >> n >> e;
    vector<pi> v[n+5]; // {weight, node}

    while (e--) {
        int x, y, wt;
        cin >> x >> y >> wt;
        v[x].push_back({wt, y});
        v[y].push_back({wt, x}); // Undirected
    }

    int src = 1;
    vector<bool> vis(n+5, false);

    priority_queue<pi, vector<pi>, greater<pi>> pq;
    pq.push({0, src}); // {cost, node}

    int ttl_cost = 0;

    // Prim's MST
    while (!pq.empty()) {
        auto [cur_wt, cur_node] = pq.top(); // unpack directly
        pq.pop();

        if (vis[cur_node]) continue;

        vis[cur_node] = true;
        ttl_cost += cur_wt;

        for (auto [ch_wt, ch_node] : v[cur_node]) { // unpack directly
            if (!vis[ch_node]) {
                pq.push({ch_wt, ch_node});
            }
        }
    }

    cout << ttl_cost << endl;
}
