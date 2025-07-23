#include <iostream>
#include <vector>
#include <string>

using namespace std;

int main() {
    int n;
    cin >> n;

    vector<string> files(n);
    for (int i = 0; i < n; ++i) {
        cin >> files[i];
    }

    string pattern = files[0];

    for (int i = 1; i < n; ++i) {
        for (int j = 0; j < pattern.size(); ++j) {
            if (pattern[j] != files[i][j]) {
                pattern[j] = '?';
            }
        }
    }

    cout << pattern << endl;
    return 0;
}
