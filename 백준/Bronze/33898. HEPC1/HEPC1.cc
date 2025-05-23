#include <bits/stdc++.h>

using namespace std;

int main(void){
    ios::sync_with_stdio(0); cin.tie(0);
    
    string board[8] = { "HECP", "HCEP", "EHPC", "CHPE", "EPHC", "CPHE", "PCEH", "PECH" };

    string tmp = "";

    for( int i = 0 ; i < 2 ; i++ ){
        string cmp;
        cin >> cmp;
        tmp += cmp;
    }
    
    for( int i = 0 ; i < 8 ; i++ ){
        if( board[i] == tmp ){
            cout << "YES";
            return 0;
        }
    }
    cout << "NO";
    return 0;
}