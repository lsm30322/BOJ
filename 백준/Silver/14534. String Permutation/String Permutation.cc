#include <bits/stdc++.h>

using namespace std;

char arr[205];
bool vis[205];
string str;
int n,k,T,cnt = 1;
void func( int num , int k ){
    if( num == k ){
        for( int i = 0 ; i < k ; i++ ){
            cout << arr[i];
            }
        cout << '\n';
        return;
    }
    else{
        for( int i = 0 ; i < k ; i++ ){
            if( !vis[i] ){
                vis[i] = true;
                arr[num] = str[i];
                func( num + 1 , k );
                vis[i] = false;
            }
        }
    }
}

int main(void){
    ios::sync_with_stdio(0); cin.tie(0);
    
    cin >> T;
    
    while(T--){
    
    cout << "Case # " << cnt++ << ":\n";
    cin >> str;
    k = str.length();
    func(0,k);

    }
    return 0;
}