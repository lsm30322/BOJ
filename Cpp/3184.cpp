#include <bits/stdc++.h>

using namespace std;

int r,c;
char board[255][255];
bool chk[255][255];
int dx[4] = { 1,0,-1,0 };
int dy[4] = { 0,1,0,-1 };

int main(void){
    ios::sync_with_stdio(0); cin.tie(0);
    
    cin >> r >> c;
    int wolf_ans = 0;
    int sheep_ans = 0;

    for( int i = 0 ; i < r ; i++ ) 
        for( int j = 0 ; j < c ; j++ )
            cin >> board[i][j];

    for( int i = 0 ; i < r ; i++ ){
        for( int j = 0 ; j < c ; j++ ){
            if( chk[i][j] || board[i][j] == '#') continue;
            queue<pair<int,int>> Q;
            Q.push( {i,j} );
            chk[i][j] = true;
            int wolf = 0; int sheep = 0;
            while( !Q.empty() ){
                auto cur = Q.front(); Q.pop();
                if( board[cur.first][cur.second] == 'v' ) wolf++;
                if( board[cur.first][cur.second] == 'o' ) sheep++;
                for( int dir = 0 ; dir < 4 ; dir++ ){
                    int nx = cur.first + dx[dir];
                    int ny = cur.second + dy[dir];
                    if( nx >= r || ny >= c || nx < 0 || ny < 0 ) continue;
                    if( board[nx][ny] == '#' || chk[nx][ny] ) continue;
                    Q.push({nx,ny});
                    chk[nx][ny] = true;
                }
            }
            if( wolf < sheep ) sheep_ans += sheep;
            else if( wolf >= sheep ) wolf_ans += wolf;
        }
    }
    cout << sheep_ans << ' ' << wolf_ans;

    return 0;
}