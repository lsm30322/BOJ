#include <bits/stdc++.h>

using namespace std;

int main(void){
    ios::sync_with_stdio(0); cin.tie(0);
    
    int n; cin >> n;

    string str; cin >> str;

    bool chk = false;
    int cmp = 0;

    for( int i = 0 ; i < n ; i++ ){
        
        if( ( str[i-1] - 'A' ) == ( str[i] - 'A' ) - 1 || ( str[i-1] - 'A' ) - 1 == (str[i] - 'A') || ( str[i-1] - 'A' ) + 1 == (str[i] - 'A') || ( str[i-1] - 'A' ) == (str[i] - 'A') + 1){
            cmp++;
            if ( cmp == 4 ) {
            cout << "YES";
            return 0;
        }
        if( ( str[i+1] - 'A' ) == ( str[i] - 'A' ) - 1 || ( str[i+1] - 'A' ) - 1 == (str[i] - 'A') || ( str[i+1] - 'A' ) + 1 == (str[i] - 'A') || ( str[i+1] - 'A' ) == (str[i] - 'A') + 1){
            cmp++;
            if ( cmp == 4 ) {
            cout << "YES";
            return 0;
        }
    }
        }
        else
            cmp = 0;
    }
    if( ( str[n-1] - 'A' )== ( str[n-2] - 'A' ) - 1 || ( str[n-1] - 'A' ) - 1 == ( str[n-2] - 'A' ) ){
        cmp++;
        if( cmp == 4 )
        cout << "YES";
    }
    cout << "NO";

    return 0;
}