#include <bits/stdc++.h>

using namespace std;

long long arr[24];

void solve(){
    
    string str;
    cin >> str;

    long long int a = 0;

    for( int i = 0 ; i < str.length() ; i++ ){
        if( str[i] == '1' ){
            a += arr[i];
        }
    }
    cout << a << '\n';
}

int main(void){
    ios::sync_with_stdio(0); cin.tie(0);
    
    int n; 

    cin >> n;

    for( int i = 0 ; i < 24 ; i++ ){
        arr[i] = pow(2,i);
    }

    reverse(arr,arr+24);

    while(n--){
        solve();
    }
    
    return 0;
}