#include <bits/stdc++.h>

using namespace std;

int T;
void solve(){
    int n; cin >> n;
    if( int(sqrt(n)) * int(sqrt(n)) == n ) cout << 1 << '\n';
    else cout << 0 << '\n';
}
int main(void){
    ios::sync_with_stdio(0); cin.tie(0);
    
    cin >> T;

    while( T-- ){
        solve();
    }
    return 0;
}