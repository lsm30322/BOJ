#include <bits/stdc++.h>

using namespace std;

int arr[1005];

int main(void){
    ios::sync_with_stdio(0); cin.tie(0);
    
    int n;
    cin >> n;

    for( int i = 0 ; i < n ; i++ ) cin >> arr[i];
    // 8 7 6 5 3
    sort( arr, arr+n , greater<int>() );
    int mx = 0, odd = 0;

    for( int i = 0 ; i < n ; i++ ){
        if( arr[i] % 2 != 0 ){
            if( odd ) {
                mx += odd + arr[i];
                odd = 0;
            }
            else odd = arr[i];
        }
        else mx += arr[i];
    }
    cout << mx;
    return 0;
}