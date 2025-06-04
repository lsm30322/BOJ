#include <bits/stdc++.h>

using namespace std;

int main(void){
    ios::sync_with_stdio(0); cin.tie(0);
    
    int a,b;

    cin >> a >> b;
    
    int ans = 0;

    int a1 = a / 2;
    int b1 = b / 2;

    cout << min(a1,b1);
    return 0;
}