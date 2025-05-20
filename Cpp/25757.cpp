#include <bits/stdc++.h>

using namespace std;

int main(void){

    int N; char GAME;

    cin >> N >> GAME;

    set<string> s;

    while( N-- ){
        string str;
        cin >> str;
        s.insert(str);
    }
    if( GAME == 'Y' )
        cout << s.size();
    else if( GAME == 'F')
        cout << s.size() / 2;
    else
        cout << s.size() / 3;

    return 0;
}