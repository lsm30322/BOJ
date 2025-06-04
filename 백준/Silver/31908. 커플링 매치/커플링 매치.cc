#include <bits/stdc++.h>

using namespace std;

int N;

int main(void){
    ios::sync_with_stdio(0); cin.tie(0);
    
    cin >> N;

    map<string,string> m1;
    map<string,int> m2;

    while(N--){
        string a,b;
        cin >> a >> b;
        if( b == "-" ) continue;
        m1[a] = b;
        m2[b]++;
    }
    int ans = 0;
    vector<string> v;
    for( auto e : m2 ){
        if( e.second == 2 ) {
            ans++;
            v.push_back(e.first);
        }
    }
    cout << ans << '\n';
    for( auto e : v ){
        for( auto k : m1 ){
            if( k.second == e ){
                cout << k.first << ' ';
            }
        }
        cout << '\n';
    }
    
    return 0;
}