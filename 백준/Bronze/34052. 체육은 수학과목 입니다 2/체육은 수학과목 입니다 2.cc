#include <bits/stdc++.h>

using namespace std;

int main(void){
    ios::sync_with_stdio(0); cin.tie(0);
    
    int sum = 0;
    for( int i = 0 ; i < 4 ; i++ ){
        int a;
        cin >> a;
        sum += a;
    }
    if( sum + 300 > 1800 ) cout << "No";
    else cout << "Yes";
    return 0;
}