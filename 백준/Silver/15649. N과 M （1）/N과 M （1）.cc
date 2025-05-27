#include <bits/stdc++.h>

using namespace std;

int arr[10];
bool vis[10];
int n,m;

void func( int k ){
    if( k == m ){
        for( int i = 0 ; i < m ; i++ ){
            cout << arr[i] << ' ';
        }
        cout << '\n';
        return;
    }
    for( int i = 1 ; i <= n ; i++ ){
        if( vis[i] ) continue;
        vis[i] = true;
        arr[k] = i;
        func(k+1);
        vis[i] = false;
    }
}

int main(void){
    ios::sync_with_stdio(0); cin.tie(0);
    
    cin >> n >> m;

    func(0);
    return 0;
}