#include <iostream>
#include <vector>
#include <queue>
#include <utility>
#include <tuple>
#include <stack>
#include <algorithm>
using namespace std;

vector<int> adj[100001];
long long dist[100001];
long long vis[100001];
long long v,e,st;
long long aidx = 1;
long long sum;

void dfs( int cur ){
        vis[cur] = aidx++;
    for( auto nxt : adj[cur] ){
        if( dist[nxt] != -1 ) continue;
        dist[nxt] = dist[cur]+1;
        dfs(nxt);
    }
}

int main(void){
  ios::sync_with_stdio(0);
  cin.tie(0);
  
    cin >> v >> e >> st;
    fill( dist, dist+100001, -1 );
    
    for( int i = 0 ; i < e; i++ ){
        int a,b;
        cin >> a >> b;
        adj[a].push_back(b);
        adj[b].push_back(a);
    }
    
    dist[st] = 0;
    for( int i = 1; i <= v; i++ ){
        sort( adj[i].begin(), adj[i].end());
    }
    dfs(st);
    for( int i = 1 ; i <= v; i++){
        sum += vis[i] * dist[i];
    }
    cout << sum;
  return 0;
}