#include <bits/stdc++.h>

using namespace std;

void solve( string& str ){
    
    string tmp;
    int j = 0, idx = 0;
    for( int i = 0 ; i < str.length() ; i++ ){
        if( str[i] == 'a' || str[i] == 'e' || str[i] == 'i' || str[i] == 'o' || str[i] == 'u' ){
            break;
        }
        else{
            tmp += str[i];
            j++;
        }
    }
    string ans;
    for( j ; j < str.length() ; j++ ){
        ans += str[j];
    }
    ans += tmp;
    ans += "ay";
    cout << ans << '\n';
}

int main(void){
    ios::sync_with_stdio(0); cin.tie(0);
    
    while(1){
    string str;
    cin >> str;
    if( str == "#" ) break;
    solve( str );
    }
    return 0;
}