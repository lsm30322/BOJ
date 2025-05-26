#include <bits/stdc++.h>
using namespace std;

vector<int> adj[105];
bool vis[105];
int n, root, ans = 0, del;

void dfs(int node) {
    if (node == del) return;

    if (adj[node].empty()) {
        ans++;
        return;
    }

    bool hasChild = false;
    for (auto nxt : adj[node]) {
        if (nxt == del) continue;
        hasChild = true;
        dfs(nxt);
    }

    if (!hasChild) ans++;
}

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);

    cin >> n;
    for (int i = 0; i < n; i++) {
        int p;
        cin >> p;
        if (p == -1) root = i;
        else adj[p].push_back(i);
    }

    cin >> del;

    if (del == root) {
        cout << 0 << '\n';
        return 0;
    }

    // 삭제할 노드를 부모의 자식 리스트에서 제거
    for (int i = 0; i < n; i++) {
        adj[i].erase(remove(adj[i].begin(), adj[i].end(), del), adj[i].end());
    }

    dfs(root);
    cout << ans << '\n';

    return 0;
}
