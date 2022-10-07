#include <iostream>
#include <vector>

using namespace std;

int arr[101][101];
int ch[101][101];

int main() {
	int ans = 0;
	int N, L;
	cin>>N>>L;

	for (int i = 1; i <= N; i++) {
		for (int j = 1; j <= N; j++) {
			cin >> arr[i][j];
		}
	}

	//가로 
	bool cross;

	for (int i = 1; i <= N; i++) {
		cross = true;
		int j;
		for (j = 2; j <= N; j++) {

			int cur = arr[i][j];
			int pre = arr[i][j - 1];

			if (abs(cur - pre) <= 1) { //경사로 가능성 
				if (cur - pre == -1) { //[1]
					bool can = true;
					for (int k = 0; k < L; k++) {
						if (j + k > N || arr[i][j + k] != cur || ch[i][j + k] == 1) { can = false; break; }
					}
					if (!can) { cross = false; break; }
					else { //경사로 놓기 가능 
						//ch배열 채우기
						for (int k = 0; k < L; k++) {
							ch[i][j + k] = 1;
						}

						if (L >= 2) j += (L - 2);
					}
				}

				else if (cur - pre == 1) { //[2]
					bool can = true;
					for (int k = 1; k <= L; k++) {
						if (j - k < 1 || arr[i][j - k] != pre || ch[i][j - k] == 1) { can = false; break; }
					}
					if (!can) { cross = false; break; }
					else { //경사로 놓기 가능 
						//ch배열 채우기
						for (int k = 1; k <= L; k++) {
							ch[i][j - k] = 1;
						}
					}
				}
			}
			else { cross = false; break; } //높이 차이 1이상 나서 건너기 실패	
		}
		if (cross) { ans++;}
	}

	//ch초기화
	for (int i = 1; i <= N; i++) {
		for (int j = 1; j <= N; j++) {
			ch[i][j] = 0;
		}
	}

	//세로
	for (int j = 1; j <= N; j++) {
		cross = true;
		int i;
		for (i = 2; i <= N; i++) {

			int cur = arr[i][j];
			int pre = arr[i - 1][j];

			if (abs(cur - pre) <= 1) { //경사로 가능성 
				if (cur - pre == -1) { //[1]
					bool can = true;
					for (int k = 0; k < L; k++) {
						if (i + k > N || arr[i + k][j] != cur || ch[i + k][j] == 1) { can = false; break; }
					}
					if (!can) { cross = false; break; }
					else {
						//ch배열 채우기
						for (int k = 0; k < L; k++) {
							ch[i + k][j] = 1;
						}
						if(L>=2) i += (L - 2);
					}
				}

				else if (cur - pre == 1) { //[2]
					bool can = true;
					for (int k = 1; k <= L; k++) {
						if (i - k < 1 || arr[i - k][j] != pre || ch[i - k][j] == 1) { can = false; break; }
					}
					if (!can) { cross = false; break; }
					else {
						//ch배열 채우기
						for (int k = 1; k <= L; k++) {
							ch[i - k][j] = 1;
						}
					}
				}
			}
			else { cross = false; break; } //높이 차이 1이상 나서 건너기 실패	
		}
		if (cross) { ans++; }
	}

	printf("%d", ans);
	return 0;
}

