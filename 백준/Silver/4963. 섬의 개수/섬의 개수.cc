#include <bits/stdc++.h>

using namespace std;

int board[55][55];
bool  vis[55][55];
int dx[] = { 1, 0, -1, 0 , 1 , 1,-1,-1 };
int dy[] = { 0, 1, 0 , -1, -1, 1,-1, 1 };
int n,m;

void reset(){

    for( int i = 0 ; i < 55 ; i++ ){
        for( int j = 0 ; j < 55 ; j++ ){
            board[i][j] = 0;
            vis[i][j] = 0;
        }
    }

}

int main(void){
    ios::sync_with_stdio(0); cin.tie(0);
    
    while(1){
        cin >> m >> n;
        if( n == 0 && m == 0 ) break;
        reset();

        for( int i = 0 ; i < n ; i++ ){
            for( int j = 0 ; j < m ; j++ ){
                cin >> board[i][j];
            }
        }

        int ans = 0;

        for( int i = 0 ; i < n ; i++ ){
            for( int j = 0 ; j < m ; j++ ){
                if( board[i][j] == 0 || vis[i][j] ) continue;
                queue<pair<int,int>> Q;
                Q.push( { i, j } );
                vis[i][j] = true;
                ans++;
                while( !Q.empty() ){
                    auto cur = Q.front();
                    Q.pop();
                    for( int dir = 0 ; dir < 8 ; dir++ ){
                        int nx = cur.first + dx[dir];
                        int ny = cur.second + dy[dir];
                        if( nx < 0 || nx >= n || ny < 0 || ny >= m ) continue;
                        if( board[nx][ny] == 0 || vis[nx][ny] ) continue;
                        vis[nx][ny] = true;
                        Q.push( {nx,ny} ) ;
                    }
                }
            }
        }
         cout << ans << '\n';
         ans = 0;
    }

    return 0;
}