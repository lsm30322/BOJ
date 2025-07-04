#include <bits/stdc++.h>

using namespace std;

void solve(){

    while(1){
    int a,b,c;
    cin >> a >> b >> c;
    if( a == 0 && b == 0 && c == 0 ) return;
    
    vector<int> v;
    v.push_back(a); v.push_back(b); v.push_back(c);
    
    bool chk = true;
    int res = v[1] - v[0];

    for( int i = 1 ; i < v.size() ; i++ ){
        if( v[i] - v[i-1] != res ){
            chk = false;
            res = v[1] / v[0];
            break;
        }
    }
    if( chk ) cout << "AP " << v[2] + res << '\n'; 
    else cout << "GP " << v[2] * res << '\n';
    
}
}

int main(void){
    ios::sync_with_stdio(0); cin.tie(0);
    
    solve();   
    return 0;
}