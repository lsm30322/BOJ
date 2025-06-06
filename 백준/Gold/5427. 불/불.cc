#include <bits/stdc++.h>

using namespace std;

int n,w,h;
string board[1005];
int dx[4] = { 1,0,-1,0 };
int dy[4] = { 0,1,0,-1 };
int dist1[1005][1005];
int dist2[1005][1005];

void solve(){
    
    for( int i = 0 ; i < h ; i++ ) cin >> board[i];

    queue<pair<int,int>> q1;
    queue<pair<int,int>> q2;

    for( int i = 0 ; i < h ; i++ ){
        fill( dist1[i], dist1[i]+w, -1 );
        fill( dist2[i], dist2[i]+w, -1 );
    }
    for( int i = 0 ; i < h ; i++ ){
        for( int j = 0 ; j < w ; j++ ){
            if( board[i][j] == '@' ){
                q1.push( {i,j} );
                dist1[i][j] = 0;
            }
            if( board[i][j] == '*' ){
                q2.push( {i,j} );
                dist2[i][j] = 0;
            }
        }
    }
    // 불에 대한 BFS
    while( !q2.empty() ){
        auto cur = q2.front(); q2.pop();
        for( int dir = 0 ; dir < 4 ; dir++ ){
            int nx = cur.first + dx[dir];
            int ny = cur.second + dy[dir];
            if( nx < 0 || ny < 0 || nx >= h || ny >= w ) continue;
            if( board[nx][ny] == '#' || dist2[nx][ny] != -1 ) continue;
            dist2[nx][ny] = dist2[cur.first][cur.second] + 1;
            q2.push({nx,ny});
        }
    }
    // 상근이에 대한 BFS
    while( !q1.empty() ){
        auto cur = q1.front();
        q1.pop();
        for( int dir = 0 ; dir < 4 ; dir++ ){
            int nx = cur.first + dx[dir];
            int ny = cur.second + dy[dir];
            if( nx < 0 || ny < 0 || nx >= h || ny >= w ){
                cout << dist1[cur.first][cur.second] + 1 << '\n';
                return;
            }
            if( board[nx][ny] == '#' || dist1[nx][ny] != -1 ) continue;
            if( dist2[nx][ny] != -1 && dist2[nx][ny] <= dist1[cur.first][cur.second] + 1 ) continue;
            dist1[nx][ny] = dist1[cur.first][cur.second] + 1;
            q1.push({nx,ny});
        }
    }
    cout << "IMPOSSIBLE\n";
}
int main(void){
    ios::sync_with_stdio(0); cin.tie(0);
    
    cin >> n;;

    while(n--){
        cin >> w >> h;
        solve();
    }
    return 0;
}