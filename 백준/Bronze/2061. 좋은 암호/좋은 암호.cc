#include <bits/stdc++.h>
using namespace std;

// 문자열로 표현된 큰 수를 int로 나눈 나머지를 구하는 함수
int mod(string& bigNum, int smallNum) {
    int result = 0;
    for (char c : bigNum) {
        result = (result * 10 + (c - '0')) % smallNum;
    }
    return result;
}

// 에라토스테네스의 체로 소수 구하기
vector<int> getPrimes(int limit) {
    vector<bool> isPrime(limit, true);
    vector<int> primes;
    isPrime[0] = isPrime[1] = false;

    for (int i = 2; i < limit; ++i) {
        if (isPrime[i]) {
            primes.push_back(i);
            for (int j = i * 2; j < limit; j += i)
                isPrime[j] = false;
        }
    }
    return primes;
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);

    string K;
    int L;
    cin >> K >> L;

    vector<int> primes = getPrimes(L);
    for (int p : primes) {
        if (mod(K, p) == 0) {
            cout << "BAD " << p << '\n';
            return 0;
        }
    }

    cout << "GOOD\n";
    return 0;
}
