#include <bits/stdc++.h>

using namespace std;

int board[105][105];
bool vis[105][105];
int dx[4] = { 1, 0, -1, 0 };
int dy[4] = { 0, 1, 0, -1 };
int n,m,k;

int main(void){
    ios::sync_with_stdio(0); cin.tie(0);
    
    cin >> n >> m >> k;

    for( int i = 0 ; i < k ; i++ ){
        int a,b,c,d;
        cin >> a >> b >> c >> d ;
        for( int j = a ; j < c ; j++ ){
            for( int l = b ; l < d ; l++ ){
                vis[l][j] = true;
            }
        }
    }

    vector<int> area;
    int ans = 0;
    for( int i = 0 ; i < n ; i++ ){
        for( int j = 0 ; j < m ; j++ ){
            if( vis[i][j] ) continue;
            queue<pair<int,int>> Q;
            Q.push({i,j});
            vis[i][j] = true;
            ans++;
            int cnt = 1;
            while( !Q.empty() ){
                auto cur = Q.front();
                Q.pop();
                for( int dir = 0 ; dir < 4 ; dir++ ){
                    int nx = cur.first + dx[dir];
                    int ny = cur.second + dy[dir];
                    if( nx < 0 || nx >= n || ny < 0 || ny >= m ) continue;
                    if( vis[nx][ny] ) continue;
                    vis[nx][ny] = true;
                    Q.push({nx,ny});
                    cnt++;
                }
            }
            area.push_back(cnt);
            cnt = 0;
        }
    }
    cout << ans << '\n';
    sort( area.begin(), area.end() );
    for( auto e : area ) cout << e << ' ';

    return 0;
}