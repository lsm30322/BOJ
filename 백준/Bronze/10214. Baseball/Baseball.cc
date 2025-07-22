#include <bits/stdc++.h>

using namespace std;

int T;
void solve(){
    int sum1 = 0, sum2 = 0;
    for( int i = 0 ; i < 9 ; i++){
        int a,b;
        cin >> a >> b;
        sum1 += a;
        sum2 += b;
    }
    if( sum1 > sum2 ) cout << "Yonsei";
    else if( sum1 < sum2 ) cout << "Korea";
    else cout << "Draw";

}
int main(void){
    ios::sync_with_stdio(0); cin.tie(0);
    
    cin >> T;

    while(T--){
        solve();
        cout << '\n';
    }
    
    return 0;
}