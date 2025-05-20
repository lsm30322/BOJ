#include <bits/stdc++.h>

using namespace std;

bool checking( string& str ){

    stack<char> s;

    for( int i = 0 ; i < str.length() ; i++ ){
        if( str[i] == '[' || str[i] == '(' ){
            s.push(str[i]);
        }
        else if( str[i] == ']' ){
            if( s.empty() || s.top() != '[' )
                return false;
            else
                s.pop();
        }
        else{
            if( s.empty() || s.top() != '(' )
                return false;
            else
                s.pop();
        }
    }
    if( !s.empty() ) return false;
    return true;
}
int answer( string& str ){
    stack<char> s;
    int tmp = 1;
    int ans = 0;
    for( int i = 0 ; i < str.length() ; i++ ){
        if( str[i] == '(' ){
            tmp *= 2;
        }
        else if( str[i] == '['){
            tmp *= 3;
        }
        else if( str[i] == ')' ){
            // () 인 경우
            if( str[ i - 1 ]== '(' ){
                ans += tmp;
            }
            tmp /= 2;
            s.pop();
        }
        else if( str[i] == ']' ){
            
            if( str[ i - 1 ] == '[' ){
                ans += tmp;
            }
            tmp /= 3;
            s.pop();
        }
    }
    return ans;
}

int main(void){
    ios::sync_with_stdio(0); cin.tie(0);
    
    string str; cin >> str;
    if( !checking(str) ) cout << 0;
    else{
        cout << answer(str);
    }

    return 0;
}