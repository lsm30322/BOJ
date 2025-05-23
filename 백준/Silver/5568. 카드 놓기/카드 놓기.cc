#include <bits/stdc++.h>

using namespace std;

int n, k, cnt;
vector<string> arr;
bool chk[11];
set<int> ans;

void func( int num, string tmp ){
    
    if( num == k ){
        int a = stoi(tmp);
        ans.insert(a); // 중복 제거를 해야하므로 set 사용
        return;
    }
    else{
        for( int i = 0 ; i < n ; i++ ){
            if( !chk[i] ){
                chk[i] = true;
                func( num + 1 , tmp + arr[i] );
                chk[i] = false;
            }
        }
    }
}

int main(void){
    ios::sync_with_stdio(0); cin.tie(0);
    
    cin >> n >> k;
    string str;
    for( int i = 0 ; i < n ; i++ ){
        cin >> str;
        arr.push_back(str);
    }
    
    func(0,"");
    
    cout << ans.size();

    return 0;
}