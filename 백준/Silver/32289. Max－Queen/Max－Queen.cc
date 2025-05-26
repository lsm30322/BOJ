#include <iostream>
#define ll long long
using namespace std;


int main()
{
    ios_base::sync_with_stdio(false); cin.tie(NULL);
    ll N, M;
    cin >> N >> M;
    cout << N * (M - 1) + (N - 1) * M + 2 * (N - 1) * (M - 1);
}