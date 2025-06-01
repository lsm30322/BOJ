#include <iostream>

using namespace std;

string board[101];
char ans[101][101];

int main(void){

    ios::sync_with_stdio(0); cin.tie(0);

    int n;
    cin >> n;
    for( int i = 0 ; i < n ; i++ ){
        cin >> board[i];
    }
    bool chk = true;
    for( int i = 0 ; i < n ; i++ ){
        for( int j = 0 ; j < n ; j++ ){
            ans[i][j] = board[j][i];
        }
    }
    for( int i = 0 ; i < n ; i++ ){
        for( int j = 0 ; j < n ; j++ ){
            if( ans[i][j] != board[i][j] ){
                chk = false;
                break;
            }
        }
    }
    if( chk ) cout << "YES";
    else cout << "NO";
}