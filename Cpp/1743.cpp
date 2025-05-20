#include <bits/stdc++.h>

using namespace std;

int n,m,k;
char board[105][105];
bool chk[105][105];
int dx[4] = { 1,0,-1,0 };
int dy[4] = { 0,1,0,-1 };

int main(void){
    ios::sync_with_stdio(0); cin.tie(0);
    
    cin >> n >> m >> k;

    for( int i = 0; i < n ; i++ ){
        for( int j = 0; j < m ; j++ ){
            board[i][j] = '.';
        }
    }
    for( int i = 0 ; i < k ; i++ ){
        int r,c;
        cin >> r >> c;
        board[r-1][c-1] = '#';
    }
    int mx = 0;

    for( int i = 0 ; i < n ; i++ ){
        for( int j = 0 ; j < m ; j++ ) {
            if( chk[i][j] || board[i][j] == '.' ) continue;
            int area = 0;
            queue<pair<int,int>> Q;
            Q.push( {i,j} );
            chk[i][j] = true;
            while( !Q.empty() ){
                auto cur = Q.front(); Q.pop();
                area++;
                for( int dir = 0 ; dir < 4 ; dir++ ){
                    int nx = cur.first + dx[dir];
                    int ny = cur.second + dy[dir];
                    if( nx >= n || ny >= m || nx < 0 || ny < 0 ) continue;
                    if( chk[nx][ny] || board[nx][ny] == '.' ) continue;
                    Q.push( {nx,ny} );
                    chk[nx][ny] = true;
                }
            }
            mx = max(mx,area);
        }
    }
    cout << mx;
    return 0;
}