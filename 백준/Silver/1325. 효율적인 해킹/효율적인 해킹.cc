#include <bits/stdc++.h>

using namespace std;

vector<int> adj[10005];
vector<int> ans;
bool dist[10005];
int n,m;

int dfs( int num ){
    int cnt = 1;
    dist[num] = true;
    for( auto nxt : adj[num] ){
        if( !dist[nxt] )
            cnt += dfs(nxt);
    }
    return cnt;
}

int main(void){
    ios::sync_with_stdio(0); cin.tie(0);
    
    cin >> n >> m;

    for( int i = 0 ; i < m ; i++ ) {
        int a,b;
        cin >> a >> b;
        adj[b].push_back(a);
    }
    
    int mx = 0;

    for( int i = 0 ; i <= n ; i++ ){
        if( adj[i].empty() ) continue;
        fill( dist, dist+10001, false );
        int cnt = dfs(i);
        if ( cnt > mx ){
            mx = cnt;
            ans.clear();
            ans.push_back(i);
        }
        else if ( mx == cnt )
            ans.push_back(i);
    }
    for( auto e : ans ) cout << e << ' ';
    
    return 0;
}