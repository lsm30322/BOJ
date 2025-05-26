#include <bits/stdc++.h>

using namespace std;

int board[5][5];
int dx[4] = { 1,0,-1,0 };
int dy[4] = { 0,1, 0,-1};
bool vis[1000000];

set<string> s;
int ans;
string res;

void dfs( int x, int y, int sum, int cnt ){
   
        if( cnt == 5 ){
            if( !vis[sum] ){
                vis[sum] = true;
                ans++;
            }
            return;
        }
        for( int dir = 0 ; dir < 4 ; dir++ ){
            int nx = x + dx[dir];
            int ny = y + dy[dir];
            if( nx < 0 || ny < 0 || nx >= 5 || ny >= 5 ) continue;
            dfs( nx,ny, sum * 10 + board[nx][ny], cnt+1 );
        }
}

int main(void){
    ios::sync_with_stdio(0); cin.tie(0);
    

    for( int i = 0 ; i < 5 ; i++ ){
        for( int j = 0 ; j < 5 ; j++ ){
            cin >> board[i][j];
        }
    }

    for( int i = 0 ; i < 5 ; i++ ){
        for( int j = 0 ; j < 5 ; j++ ){
            dfs( i,j,board[i][j], 0 );
        }
    }
    
    cout << ans;
    return 0;
}