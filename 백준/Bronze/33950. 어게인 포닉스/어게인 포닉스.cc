#include <bits/stdc++.h>

using namespace std;

void solve(){
    string str;
    cin >> str;

    for( int i = 0 ; i < str.length(); i++ ){
        if( str[i-1] == 'P' && str[i] == 'O' ){
            cout << "H";
        }
        cout << str[i];
    }
    cout << '\n';
}

int main(void){
    ios::sync_with_stdio(0); cin.tie(0);
    
    int n; cin >> n;

    while( n-- ){
        solve();
    }
    return 0;
}