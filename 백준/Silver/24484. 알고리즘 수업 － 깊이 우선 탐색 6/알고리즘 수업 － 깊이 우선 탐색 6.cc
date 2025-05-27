#include <bits/stdc++.h>
using namespace std;

int n, m, root;
vector<int> adj[100001];
int depth[100001];
int t[100001];
int order = 1;

void dfs(int cur) {
    t[cur] = order++;
    for (int nxt : adj[cur]) {
        if (depth[nxt] != -1) continue;
        depth[nxt] = depth[cur] + 1;
        dfs(nxt);
    }
}

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);

    cin >> n >> m >> root;

    fill(depth, depth + n + 1, -1);
    fill(t, t + n + 1, 0);
    depth[root] = 0;

    while (m--) {
        int u, v;
        cin >> u >> v;
        adj[u].push_back(v);
        adj[v].push_back(u);
    }

    for (int i = 1; i <= n; i++) {
        sort(adj[i].begin(), adj[i].end(), greater<int>());
    }

    dfs(root);

    long long ans = 0;
    for (int i = 1; i <= n; i++) {
        ans += 1LL * t[i] * depth[i];
    }

    cout << ans << '\n';
    return 0;
}
