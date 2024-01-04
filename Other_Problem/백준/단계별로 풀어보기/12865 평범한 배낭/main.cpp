#include <iostream>
#include <vector>
#include <algorithm> // for. max 함수

using namespace std;

int main() {
    // n개의 물건, k의 무게
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
    // dp[i][j]: i번째 물건까지 고려했을 때, 무게 j일 때의 최대 가치
    vector<vector<int>> dp(n + 1, vector<int>(k + 1, 0));

    for (int i = 0; i < n; i++) {
        int curWeight = arr[i].first; // 현재 물건의 무게
        int curValue = arr[i].second; // 현재 물건의 가치

        for (int j = 0; j <= k; j++) {
            if (j - curWeight >= 0) {
                dp[i+1][j] = max(dp[i][j], dp[i][j - curWeight] + curValue);
            } else {
                dp[i+1][j] = dp[i][j];
            }

            // 최대 가치 갱신
            maxVal = max(dp[i+1][j], maxVal);
        }
    }*/
    
    // dp[j]: 무게 j일 때의 최대 가치
    vector<int> dp(k + 1, 0);

    for (int i = 0; i < n; i++) {
        int curWeight = arr[i].first; // 현재 물건의 무게
        int curValue = arr[i].second; // 현재 물건의 가치

        for (int j = k; j >= curWeight; j--) {
            dp[j] = max(dp[j], dp[j - curWeight] + curValue);
            // 최대 가치 갱신
            maxVal = max(dp[j], maxVal);
        }
    }


    cout << maxVal;

    return 0;
}
