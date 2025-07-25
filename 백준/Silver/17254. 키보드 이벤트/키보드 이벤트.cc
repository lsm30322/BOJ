#include <bits/stdc++.h>

using namespace std;

int N,M;
vector<pair<pair<int,int>,char>> v;

int main(void){
    ios::sync_with_stdio(0); cin.tie(0);
    
    cin >> N >> M;
    for( int i = 0 ; i < M ; i++ ){
        int a,b;
        char c;
        cin >> a >> b >> c;
        v.push_back({{b, a}, c});
    }
    sort( v.begin(), v.end() );
    for( auto e : v ){
        cout << e.second;
    }
    return 0;
}