#include <iostream>
#include <vector>

using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    
    int N, Q;
    cin >> N >> Q;
    vector<bool> filled(N + 1, false); // 1-based 인덱싱
    
    while (Q--) {
        int L, I;
        cin >> L >> I;
        for (int pos = L; pos <= N; pos += I) {
            if (!filled[pos]) {
                filled[pos] = true;
            }
        }
    }
    
    int empty_count = 0;
    for (int i = 1; i <= N; ++i) {
        if (!filled[i]) {
            empty_count++;
        }
    }
    
    cout << empty_count;
    return 0;
}
