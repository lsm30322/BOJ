#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main() {
    int N, P;
    while (true) {
        cin >> N;
        if (N == 0) break;
        cin >> P;
        
        int sheet_idx;
        if (P <= N/2) {
            sheet_idx = (P - 1) / 2;
        } else {
            sheet_idx = (N - P) / 2;
        }
        
        int front1 = 2 * sheet_idx + 1;
        int front2 = front1 + 1;
        int back1 = N - 2 * sheet_idx;
        int back2 = back1 - 1;
        
        vector<int> pages = {front1, front2, back2, back1};
        vector<int> result;
        
        for (int page : pages) {
            if (page != P) {
                result.push_back(page);
            }
        }
        
        sort(result.begin(), result.end());
        
        for (int i = 0; i < 3; ++i) {
            cout << result[i];
            if (i < 2) cout << " ";
        }
        cout << endl;
    }
    return 0;
}
