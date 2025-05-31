#include <iostream>
#include <string>
using namespace std;

int main() {
    string A, B;
    cin >> A >> B;
    int rowSize = B.size();
    int colSize = A.size();
    int indexA = -1;
    int indexB = -1;
    
    //cossing되는 값 찾기
    for (int i=0; i<colSize; i++) { //문제 조건대로 A의 첫 단어부터 B와 맞는것이 있는지 찾아야 함. B부터 하면 달라짐 
        for (int j=0; j<rowSize; j++) 
            if (A[i] == B[j]) {
                indexA = i; //겹치는 단어가 몇번째 열인지
                indexB = j; //겹치는 단어가 몇번째 행인지
                break;
            }
        if (indexA != -1)
            break;
    }

  
    //rowSize*colSize의 char형 배열 생성 후 값 넣기 
    char ans[rowSize][colSize];
    //A를 넣을 때는 ans[i][indexB]일 때마다 한 개씩 넣음
    for (int i=0; i<rowSize; i++) {
        for (int j=0; j<colSize; j++) {
            if (i==indexB) //가로(A) 채우기
                ans[i][j] = A[j];
                
            else if(j==indexA) //세로(B) 채우기
                ans[i][j] = B[i];
                
            else //나머지
                ans[i][j] = '.';
        }
    }
    
    for (int i=0; i<rowSize; i++) {
        for (int j=0; j<colSize; j++)
            cout << ans[i][j];   
            
        if (i+1==rowSize) 
            break;
        else
            cout << '\n';
    }
    
    return 0;
}