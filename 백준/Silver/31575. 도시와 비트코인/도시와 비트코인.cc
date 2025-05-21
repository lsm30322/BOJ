#include <bits/stdc++.h>

using namespace std;

int board[303][303];
bool vis[303][303];
int dx[] = { 1, 0 };
int dy[] = { 0, 1 };
int m, n;

int main(void){
    ios::sync_with_stdio(0); cin.tie(0);
    
    cin >> m >> n;

    for( int i = 0 ; i < n ; i++ ){
        for( int j = 0 ; j < m ; j++ ){
            cin >> board[i][j];
        }
    }

    queue<pair<int,int>> q;
    vis[0][0] = true;
    q.push({0,0});

    while(!q.empty()){
        auto cur = q.front();
        q.pop();
        for( int dir = 0 ; dir < 2 ; dir++ ){
            int nx = cur.first + dx[dir];
            int ny = cur.second + dy[dir];
            if( nx < 0 || nx >= n || ny < 0 || ny >= m ) continue;
            if( vis[nx][ny] || board[nx][ny] == 0 ) continue;
            vis[nx][ny] = true;
            q.push({nx,ny});
        }
    }
    if( vis[n-1][m-1] ) cout << "Yes";
    else cout << "No";

    return 0;
}