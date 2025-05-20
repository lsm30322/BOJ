#include <bits/stdc++.h>

using namespace std;

bool isPalindrome( string& str, int left, int right ){
    
    while( left < right ){
        if( str[left] != str[right] ){
            return false;
        }
        left++;
        right--;
    }
    return true;
}

bool yusaPalinedrome( string& str ){
    int left = 0;
    int right = str.length() - 1;

    while( left < right ){
        if( str[left] != str[right] ){
            return isPalindrome( str, left + 1, right ) || isPalindrome( str, left, right - 1 );
        }
        left++;
        right--;
    }
    return true;
}
int main(void){
    ios::sync_with_stdio(0); cin.tie(0);
    
    int n; cin >> n;

    while( n-- ){
        string str; cin >> str;

        if( isPalindrome(str,0,str.length()-1) ){
            cout << 0 << '\n';
        }
        else if ( yusaPalinedrome(str) ){
            cout << 1 << '\n';
        }
        else{
            cout << 2 << '\n';
        }


    }

    return 0;
}