#include <bits/stdc++.h>

using namespace std;

vector<int> adj[100001];
int depth[100001];
int vis[100001];
int num[100001];
int N,R,Q,ans;

int dfs( int root ){
    if( num[root] != 0 ) return num[root];
    vis[root] = true;
    int ans = 1;
    for( auto nxt : adj[root] ){
        if( vis[nxt] ) continue;
        ans += dfs(nxt);
    }
    num[root] = ans;
    return ans;
}

int main(void){
    ios::sync_with_stdio(0); cin.tie(0);
    
    cin >> N >> R >> Q;

    for( int i = 0 ; i < N - 1 ; i++ ){
        int a,b;
        cin >> a >> b;
        adj[a].push_back(b);
        adj[b].push_back(a);
    }

    num[R] = dfs(R);

    for( int i = 0 ; i < Q ; i++ ){
        int a; 
        cin >> a;
        cout << num[a] << '\n';
    }
    return 0;
}