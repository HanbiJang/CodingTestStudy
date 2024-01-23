#include <iostream>
#include <vector> 
using namespace std;

void countColoredPapers(vector<vector<int>>& paper, int& whiteCount, int& blueCount, int row, int col, int size) {
    //종이 크기가 1일 때
    if (size == 1) {
        // 해당 칸이 흰색이면 흰색 종이 수 증가, 아니면 파란색 종이 수 증가
        if (paper[row][col] == 0) {
            whiteCount++;
        } else {
            blueCount++;
        }
        return;
    }

    //종이들이 모두 같은 색인지 확인
    bool isAllSameColor = true;
    int firstColor = paper[row][col];
    
    //작은 종이 내부를 돌면서 같은 색인지 확인
    for (int i = row; i < row + size; i++) {
        for (int j = col; j < col + size; j++) {
            if (paper[i][j] != firstColor) {
                isAllSameColor = false;
                break;
            }
        }
        if (!isAllSameColor) {
            break;
        }
    }

    //종이들이 모두 같은 색이라면 해당 색의 종이 수 증가
    //아니라면 네 등분으로 자르고 재귀적으로 호출
    if (isAllSameColor) {
        if (firstColor == 0) {
            whiteCount++;
        } else {
            blueCount++;
        }
    } else {
        int newSize = size / 2;
        countColoredPapers(paper, whiteCount, blueCount, row, col, newSize);
        countColoredPapers(paper, whiteCount, blueCount, row, col + newSize, newSize);
        countColoredPapers(paper, whiteCount, blueCount, row + newSize, col, newSize);
        countColoredPapers(paper, whiteCount, blueCount, row + newSize, col + newSize, newSize);
    }
}

int main() {
    int N;
    cin >> N;

    //NxN 크기의 종이
    vector<vector<int>> paper(N, vector<int>(N, 0));
    for (int i = 0; i < N; i++) {
        for (int j = 0; j < N; j++) {
            cin >> paper[i][j];
        }
    }

    int whiteCount = 0, blueCount = 0;

    countColoredPapers(paper, whiteCount, blueCount, 0, 0, N);

    cout << whiteCount << endl;
    cout << blueCount << endl;

    return 0;
}

