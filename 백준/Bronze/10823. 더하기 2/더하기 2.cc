#include <iostream>
#include <string>
 
using namespace std;
 
int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(0);
 
    string s, temp;
    int ans = 0;
    while (getline(cin, s)) {
        for (int i = 0; i < s.length(); i++) {
            if (s[i] != ',') {
                temp += s[i];
            } else {
                ans += stoi(temp);
                temp.clear();
 
            }
        }
    }
    ans += stoi(temp);
    cout << ans;
 
}