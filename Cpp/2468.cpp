#include <bits/stdc++.h>

using namespace std;

int n;
int board[105][105];
int mapp[105][105];
bool vis[105][105];
int dx[4] = { 1, 0, -1, 0 };
int dy[4] = { 0, 1, 0, -1 };
int cnt;
vector<int> v;

void reset_mapp(){

    for( int i = 0 ; i < n ; i++ ){
        for( int j = 0 ; j < n ; j++ ){
            mapp[i][j] = 0;
            vis[i][j] = 0;
        }
    }
    cnt = 0;
}

int main(void){
    ios::sync_with_stdio(0); cin.tie(0);
    
    cin >> n;

    int mx = -1;
    
    for( int i = 0 ; i < n ; i++ ){
        for( int j = 0 ; j < n ; j++ ){
            cin >> board[i][j];
            if( board[i][j] > mx )
                mx = board[i][j];
        }
    }

    for( int h = 1; h <= mx ; h++ ){

        for( int i = 0 ; i < n ; i++ ){
            for( int j = 0 ; j < n ; j++ ){
                if( board[i][j] < h ){
                    mapp[i][j] = 0;
                }
                else
                    mapp[i][j] = 1;
            }
        }

        for( int i = 0 ; i < n ; i++ ){
            for( int j = 0 ; j < n ; j++ ){
                if( vis[i][j] || mapp[i][j] == 0 ) continue;
                queue<pair<int,int>> Q;
                Q.push({i,j});
                vis[i][j] = true;
                while( !Q.empty() ){
                    auto cur = Q.front();
                    Q.pop();
                    for( int dir = 0 ; dir < 4 ; dir++ ){
                        int nx = cur.first + dx[dir];
                        int ny = cur.second + dy[dir];
                        if( nx < 0 || nx >= n || ny < 0 || ny >= n ) continue;
                        if( vis[nx][ny] || mapp[nx][ny] == 0 ) continue;
                        vis[nx][ny] = true;
                        Q.push( { nx, ny } );
                    }
                }
                cnt++;
            }
        }
        v.push_back(cnt);
        reset_mapp();
    }

    sort( v.begin(), v.end() );
    cout << v[v.size()-1];
   
        
    return 0;
}