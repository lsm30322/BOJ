#include <bits/stdc++.h>

using namespace std;

int arr[1001];
int n;

int main(void){
    ios::sync_with_stdio(0); cin.tie(0);
    
    cin >> n;
    for( int i = 0 ; i < n ; i++ ) cin >> arr[i];
    int first = arr[0];

    sort( arr, arr+n );
    if( arr[0] == first ) cout << "ez";
    else if( arr[n-1] == first ) cout << "hard";
    else cout << "?";

    
    return 0;
}