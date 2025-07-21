#include <bits/stdc++.h>

using namespace std;

void solve( vector<string>& arr ){

    vector<string> v1 = arr;
    vector<string> v2 = arr;

    sort( v1.begin(), v1.end() );
    sort( v2.begin(), v2.end(), greater<string>() );

    if( v1 == arr ) cout << "INCREASING";
    else if( v2 == arr ) cout << "DECREASING";
    else cout << "NEITHER";

}
int main(void){
    ios::sync_with_stdio(0); cin.tie(0);
    
    int n; cin >> n;

    vector<string> arr(n);

    for( int i = 0 ; i < n ; i++ ) cin >> arr[i];

    solve(arr);

    return 0;
}