#include <bits/stdc++.h>

using namespace std;

string board[3005];
int dist[3005][3005];
int dx[] = { 1,0,-1,0 };
int dy[] = { 0,1,0,-1 };
int n,m;

int main(void){
    ios::sync_with_stdio(0); cin.tie(0);
    
    queue<pair<int,int>> Q;
    
    cin >> n >> m;

    for( int i = 0 ; i < n ; i++ ) fill( dist[i], dist[i]+3005, -1 );
   
    for( int i = 0 ; i < n ; i++ ){
        cin >> board[i];
    }
    for( int i = 0 ; i < n ; i++ ){
        for( int j = 0 ; j < m ; j++ ){
            if( board[i][j] == '2' ){
                Q.push({i,j});
                dist[i][j] = 0;
                break;
            }
        }
    }
    vector<pair<int,int>> v;

        while( !Q.empty() ){
            auto cur = Q.front();
            Q.pop();
            if( board[cur.first][cur.second] != '0' ) v.push_back( {cur.first, cur.second} );
            for( int dir = 0 ; dir < 4 ; dir++ ){
                int nx = cur.first + dx[dir];
                int ny = cur.second + dy[dir];
                if( nx < 0 || nx >= n || ny < 0 || ny >= m ) continue;
                if( board[nx][ny] == '1' || dist[nx][ny] != -1 ) continue;
                    dist[nx][ny] = dist[cur.first][cur.second] + 1;
                    Q.push( { nx , ny } );
                }
            }
        for( auto nxt : v ){
            if( dist[nxt.first][nxt.second] == 0 || dist[nxt.first][nxt.second] == -1 ) continue;
            else {
                cout << "TAK\n";
                cout << dist[nxt.first][nxt.second];
                return 0; 
            }
        }
        cout << "NIE";

    return 0;
}