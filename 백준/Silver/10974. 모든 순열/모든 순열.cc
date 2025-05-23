#include <bits/stdc++.h>

using namespace std;

int arr[10];
bool vis[10];
int n;

void func( int num , int n ){
    if( num == n ){
        for( int i = 0 ; i < n ; i++ ){
            cout << arr[i] << ' ';
        }
        cout << '\n';
        return;
    }
    else{
        for( int i = 1 ; i <= n ; i++ ){
            if( vis[i] ) continue;
            vis[i] = true;
            arr[num] = i;
            func( num+1, n );
            vis[i] = false;
        }
    }
}

int main(void){
    ios::sync_with_stdio(0); cin.tie(0);
    
    cin >> n;

    func(0,n);

    return 0;
}