#include <bits/stdc++.h>

using namespace std;

int a, b, c;
int sum1, sum2, sum3;
int idx, N;

int main(void){
    ios::sync_with_stdio(0); cin.tie(0);
    
    for( int i = 2992; i <= 9999 ; i++ ){
        N = i;
        while( N > 0 ){
            a = N % 10;
            N /= 10;
            sum1 += a;
        }
        N = i;
        while( N > 0 ){
            b = N % 12;
            N /= 12;
            sum2 += b;
        }
        N = i;
        while( N > 0 ){
            c = N % 16;
            N /= 16;
            sum3 += c;
        }
        if( sum1 == sum2 && sum2 == sum3 ){
            cout << i << '\n';
        }
        sum1 = sum2 = sum3 = 0;
    }
    
    return 0;
}