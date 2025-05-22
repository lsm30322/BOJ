#include <bits/stdc++.h>

using namespace std;

int T,n;
vector<int> adj[10005];
int dist[10005]; // depth
int p[10005];

int_fast16_t LCA( int u, int v ){

    int a = u;
    int b = v;

    if( dist[a] > dist[b] ) swap(a,b);

    while( dist[a] != dist[b] ) b = p[b];
    while( a != b ){
        a = p[a];
        b = p[b];
    }

    return a;
}

void dfs( int cur ){

    for( auto nxt : adj[cur] ){
        if( p[cur] == nxt ) continue;
        p[nxt] = cur;
        dist[nxt] = dist[cur] + 1;
        dfs( nxt );
    }

}

void reset( int n ){

    for( int i = 0 ; i <= n ; i++ ){ 
        adj[i].clear();
        dist[i] = 0;
        p[i] = 0;
    }
    
}
void solve(){

    cin >> n;

    reset(n);

    vector<bool> Parents( n + 1, false );

    for( int i = 0 ; i < n - 1 ; i++ ){
        int a,b;
        cin >> a >> b;
        adj[a].push_back(b);
        adj[b].push_back(a);
        Parents[b] = true;
    }
    // 루트 찾기
    int root = 0;
    for( int i = 1 ; i <= n ; i++ ){
        if( !Parents[i] ){
            root = i;
            break;
        }
    }

    dist[root] = 0;
    p[root] = 0;
    dfs(root);

    int u,v;
    cin >> u >> v; // LCA를 구할 노드 입력
    cout << LCA(u,v) << '\n';
}

int main(void){
    ios::sync_with_stdio(0); cin.tie(0);
    
    cin >> T;

    while(T--){
        solve();
    }
    return 0;
}