#include <bits/stdc++.h>

using namespace std;

int main(void){
    ios::sync_with_stdio(0); cin.tie(0);
    
    string str = "SciComLove";
    string cmp; cin >> cmp;
    int cnt = 0;
    for( int i = 0 ; i < str.length(); i++ ){
        if( cmp[i] != str[i] ) cnt++;
    }
    cout << cnt;
    
    return 0;
}