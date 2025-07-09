#include <bits/stdc++.h>

using namespace std;

int main(void){
    ios::sync_with_stdio(0); cin.tie(0);
    
    string a,b;
    cin >> a >> b;

    string ans1,ans2,ans3,ans4,ans5;

    for( int i = 0 ; i < a.length(); i++ ){
        if( a[i] == '1' && b[i] == '1' ){
            ans1 += "1";
        }
        else ans1 += "0";
    }
    for( int i = 0 ; i < a.length(); i++ ){
        if( a[i] == '1' || b[i] == '1' ){
            ans2 += "1";
        }
        else ans2 += "0";
    }
    for( int i = 0 ; i < a.length(); i++ ){
        if( a[i] != b[i] ){
            ans3 += "1";
        }
        else ans3 += "0";
    }
    for( int i = 0 ; i < a.length(); i++ ){
        if( a[i] == '1' ){
            ans4 += "0";
        }
        else ans4 += "1";
    }
    for( int i = 0 ; i < b.length(); i++ ){
        if( b[i] == '1' ){
            ans5 += "0";
        }
        else ans5 += "1";
    }
    cout << ans1 << '\n' << ans2 << '\n' << ans3 << '\n' << ans4 << '\n' << ans5;
    
    return 0;
}