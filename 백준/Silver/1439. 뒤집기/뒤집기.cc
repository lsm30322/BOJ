#include <bits/stdc++.h>

using namespace std;

int main(void){
    ios::sync_with_stdio(0); cin.tie(0);
   
    string str;
    cin >> str;

    int a = 0;
    int b = 0;

    if( str[0] == '0' ) a++;
    else b++;
    
    for( int i = 1 ; i < str.length() ; i++ ){
        if( str[i-1] != str[i] && str[i] == '1' ) b++;
        if( str[i-1] != str[i] && str[i] == '0' ) a++;
    }
    //if( str[ str.length() - 2 ] != str[ str.length() - 1 ] && str[ str.length()-1 ] == '0' ) a++; 
    //if( str[ str.length() - 2 ] != str[ str.length() - 1 ] && str[ str.length()-1 ] == '1' ) b++;
    cout << min(a,b);

    return 0;
}