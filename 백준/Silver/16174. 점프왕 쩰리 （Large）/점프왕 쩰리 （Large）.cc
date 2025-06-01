#include <iostream>
#include <queue>
using namespace std;

int board[65][65];
bool vis[65][65];
int dx[] = { 0,1 };
int dy[] = { 1,0 };
int n;

int main(void){

    ios::sync_with_stdio(0); cin.tie(0);

    cin >> n;
    for( int i = 0 ; i < n ; i++ ){
        for( int j = 0 ; j < n ; j++ ){
            cin >> board[i][j];
        }
    }
        queue<pair<int,int>> q;
        vis[0][0] = true;
        q.push({0,0});

        while( !q.empty() ){
            auto cur = q.front();
            q.pop();
            int val = board[cur.first][cur.second];
            if( val == -1 ){
                cout << "HaruHaru";
                return 0;
                }
            for( int dir = 0 ; dir < 2 ; dir++ ){
               int nx = cur.first + dx[dir] * val;
               int ny = cur.second + dy[dir] * val;
                if( nx < 0 || ny < 0 || nx >= n || ny >= n ) continue;
                if( vis[nx][ny] ) continue;
                    vis[nx][ny] = true;
                    q.push({nx,ny});
                }
        }
    cout << "Hing";
    return 0;
    
}