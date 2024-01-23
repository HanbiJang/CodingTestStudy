#include <iostream>
#include <vector> 
using namespace std;

void countColoredPapers(vector<vector<int>>& paper, int& whiteCount, int& blueCount, int row, int col, int size) {
    //���� ũ�Ⱑ 1�� ��
    if (size == 1) {
        // �ش� ĭ�� ����̸� ��� ���� �� ����, �ƴϸ� �Ķ��� ���� �� ����
        if (paper[row][col] == 0) {
            whiteCount++;
        } else {
            blueCount++;
        }
        return;
    }

    //���̵��� ��� ���� ������ Ȯ��
    bool isAllSameColor = true;
    int firstColor = paper[row][col];
    
    //���� ���� ���θ� ���鼭 ���� ������ Ȯ��
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

    //���̵��� ��� ���� ���̶�� �ش� ���� ���� �� ����
    //�ƴ϶�� �� ������� �ڸ��� ��������� ȣ��
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

    //NxN ũ���� ����
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

