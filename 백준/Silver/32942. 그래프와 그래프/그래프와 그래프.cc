#include <iostream>
#include <vector>
#define MAX 11

using namespace std;

vector<int> tree[MAX];


void solve(int a, int b, int c){
    for(int i = 1; i <= 10; i++){
        for(int j = 1; j <= 10; j++){
            if(a*i + b*j == c){
                tree[i].push_back(j);
            }
        }
        
        if(tree[i].size() == 0){
            tree[i].push_back(0);
        }
    }
}

int main()
{   
    ios::sync_with_stdio(0);
    cin.tie(0);
    
    int a, b, c;
    
    
    //입력
    cin >> a >> b >> c;

    //연산
    solve(a, b, c);
    
    //출력
    for(int i = 1; i <= 10; i++){
        for(auto num : tree[i]){
            cout << num << " ";
        }
        
        cout << "\n";
    }
    
    
    return 0;
}