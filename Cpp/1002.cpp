#include <bits/stdc++.h>

using namespace std;

int main(void){
   ios::sync_with_stdio(0); cin.tie(0);
    // 직선거리의 좌표 
    
    int n; cin >> n;

    while( n-- ){
        int x1, y1, r1, x2, y2, r2;
        cin >> x1 >> y1 >> r1 >> x2 >> y2 >> r2;
        double d = sqrt(pow(( x2 - x1 ),2) + pow( ( y2 - y1 ),2 ));
        if( d == 0 && r1 == r2 ){
            cout << -1 << '\n';
        }
        else if( d > r1 + r2 || d + ( r1 > r2 ? r2 : r1) < ( r1 > r2 ? r1 : r2 )){ // 만나지않을때
            cout << 0 << '\n';
        }
        else if( d == r1+r2 || d + (r1 > r2 ? r2 : r1) == (r1 > r2 ? r1 : r2) ){
            cout << 1 << '\n';
        }
        else{
            cout << 2 << '\n';
        }
    }

    return 0;
}