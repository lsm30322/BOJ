#include <bits/stdc++.h>

using namespace std;

int board[255][255];
bool vis[255][255];
int dx[] = { 1, -1, 0, 0, -1, 1, -1, 1 };
int dy[] = { 0, 0, -1, 1, -1, 1, 1, -1  };
int n,m;

int main(void){
    ios::sync_with_stdio(0); cin.tie(0);
  
    cin >> n >> m;

    for( int i = 0 ; i < n ; i++ ){
        for( int j = 0 ; j < m ; j++ ){
            cin >> board[i][j];
        }
    }
    int area = 0;
    for( int i = 0 ; i < n ; i++ ){
        for( int j = 0 ; j < m ; j++ ){
            if( board[i][j] == 0 || vis[i][j] ) continue;
            vis[i][j] = true;
            queue<pair<int,int>> Q;
            Q.push( { i , j } );
            area++;
            while( !Q.empty() ){
                auto cur = Q.front();
                Q.pop();
                for( int dir = 0 ; dir < 8 ; dir++ ){
                    int nx = cur.first + dx[dir];
                    int ny = cur.second + dy[dir];
                    if( nx < 0 || nx >= n || ny < 0 || ny >= m ) continue;
                    if( board[nx][ny] == 0 || vis[nx][ny] ) continue;
                    vis[nx][ny] = true;
                    Q.push({nx,ny});
                }
            }
        }
    }
    cout << area;


    return 0;
} 