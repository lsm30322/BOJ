#include <bits/stdc++.h>
// 5568 치즈
using namespace std;

#define X first
#define Y second

int n,m,ed;
string board[1005];
int dist[1005][1005];
int dx[4] = { 1,0,-1,0 };
int dy[4] = { 0,1,0,-1 };
vector<pair<int, int>> factories(10); // 치즈 공장 위치 (1~N)
pair<int, int> start; // 쥐 시작 위치

int BFS( int sx, int sy, int ex, int ey ){
    
    for( int i = 0 ; i < n ; i++ )
        fill( dist[i], dist[i]+m, -1 );
    
    queue<pair<int,int>> Q;
    while( !Q.empty() ){
        auto cur = Q.front(); Q.pop();
        for( int dir = 0 ; dir < 4 ; dir++ ){
            int nx = cur.X + dx[dir];
            int ny = cur.Y + dy[dir];
            if( nx >= n || nx < 0 || ny >= m || ny < 0 ) continue;
            if( board[nx][ny] == 'X' || dist[nx][ny] != -1 ) continue;
            dist[nx][ny] = dist[cur.X][cur.Y] + 1;
            Q.push( {nx,ny} );
        }
    }
    for( int i = 0 ; i < n ; i++ ){
        for( int j = 0 ; j < m ; j++ ){
            if( dist[i][j] != -1 && board[i][j] != '.')
            cout << dist[i][j] << ' ';
        }
        cout << '\n';
    }
}

int main(void){

    cin >> n >> m >> ed;

    for( int i = 0 ; i < n ; i++ ) {
        cin >> board[i];
        for( int j = 0 ; j < m ; j++ ){
            if( board[i][j] == 'S' ) start = {i,j};
            else if( isdigit(board[i][j]) ) factories[ board[i][j] -'0' ] = { i,j };
        }
   
    vector<int> order(ed); // 공장의 개수 만큼 리스트 생성
    for( int i = 0 ; i < ed ; i++ ) order[i] = i + 1;
    int min_time = INT_MAX;

    return 0;
}