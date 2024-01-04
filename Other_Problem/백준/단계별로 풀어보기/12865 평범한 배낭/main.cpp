#include <iostream>
#include <vector>
#include <algorithm> // for. max �Լ�

using namespace std;

int main() {
    // n���� ����, k�� ����
    int n, k;
    cin >> n >> k;

    int maxVal = 0;
    vector<pair<int, int>> arr;

    for (int i = 0; i < n; i++) {
        int w, v;
        cin >> w >> v;
        arr.push_back(make_pair(w, v));
    }
	/*
    // dp[i][j]: i��° ���Ǳ��� ������� ��, ���� j�� ���� �ִ� ��ġ
    vector<vector<int>> dp(n + 1, vector<int>(k + 1, 0));

    for (int i = 0; i < n; i++) {
        int curWeight = arr[i].first; // ���� ������ ����
        int curValue = arr[i].second; // ���� ������ ��ġ

        for (int j = 0; j <= k; j++) {
            if (j - curWeight >= 0) {
                dp[i+1][j] = max(dp[i][j], dp[i][j - curWeight] + curValue);
            } else {
                dp[i+1][j] = dp[i][j];
            }

            // �ִ� ��ġ ����
            maxVal = max(dp[i+1][j], maxVal);
        }
    }*/
    
    // dp[j]: ���� j�� ���� �ִ� ��ġ
    vector<int> dp(k + 1, 0);

    for (int i = 0; i < n; i++) {
        int curWeight = arr[i].first; // ���� ������ ����
        int curValue = arr[i].second; // ���� ������ ��ġ

        for (int j = k; j >= curWeight; j--) {
            dp[j] = max(dp[j], dp[j - curWeight] + curValue);
            // �ִ� ��ġ ����
            maxVal = max(dp[j], maxVal);
        }
    }


    cout << maxVal;

    return 0;
}
