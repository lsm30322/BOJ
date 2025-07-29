#include <bits/stdc++.h>
using namespace std;

vector<int> p(100005, -1);
vector<pair<int, pair<int, int>>> edges;
int v, e;

int find(int x) {
    if (p[x] < 0) return x;
    return p[x] = find(p[x]); // 경로 압축
}

bool is_diff_group(int u, int v) {
    u = find(u); v = find(v);
    if (u == v) return false;
    if ( p[u] < p[v] ) p[u]--;
    if ( p[u] == p[v] ) p[v] = u;
    else p[u] = v;
    return true;
}

int main(void) {
    ios::sync_with_stdio(0); cin.tie(0);

    cin >> v >> e;

    for (int i = 0; i < e; i++) {
        int a, b, cost;
        cin >> a >> b >> cost;
        edges.push_back({ cost, {a, b} });
    }

    sort(edges.begin(), edges.end());

    int cnt = 0;
    int ans = 0;
    int mxans = 0;

    for (int i = 0; i < e; i++) {
        int a = edges[i].second.first;
        int b = edges[i].second.second;
        int cost = edges[i].first;
        if (!is_diff_group(a, b)) continue;
        ans += cost;
        mxans = max(mxans, cost);
        cnt++;
        if (cnt == v - 1) break;
    }

    cout << ans - mxans << '\n';

    return 0;
}
