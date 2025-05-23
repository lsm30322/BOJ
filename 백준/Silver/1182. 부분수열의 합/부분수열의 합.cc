#include <bits/stdc++.h>

using namespace std;

int arr[25];
int N,S;
int cnt;

void func( int k , int sum ){
    if( k == N ){
        if( sum == S ){
            cnt++;
        }
        return;
    }
    // -7 -3 -2 5 8
    func( k + 1, sum );
    func( k + 1 , sum + arr[k] );
}

int main(void){
    ios::sync_with_stdio(0); cin.tie(0);
    
    cin >> N >> S;

    for( int i = 0 ; i < N ; i++ ) cin >> arr[i];

    func(0,0);

    if( S == 0 ) cnt--;
    
    cout << cnt;

    return 0;
}