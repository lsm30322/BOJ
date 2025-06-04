#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    
    int N, T, P;
    cin >> N >> T >> P;
    
    int arr[55] = {0}; // P 최대 50
    for (int i = 0; i < N; ++i) {
        cin >> arr[i];
    }
    
    int rank = 1;
    bool found = false;
    for (int i = 0; i < N; ++i) {
        if (arr[i] > T) rank++;
        else {
            found = true;
            break;
        }
    }
    
    if (rank > P) {
        cout << -1;
    } else {
        if (N == P) {
            if (T > arr[N-1]) cout << rank;
            else cout << -1;
        } else {
            cout << rank;
        }
    }
    
    return 0;
}
