#include <iostream>
#include <vector>
#include <queue>
#include <algorithm>

using namespace std;

int ch[26][26];
int x[] = { 0,0,1,-1 };
int y[] = { 1,-1,0,0 };

int main(){
	vector<int> ans;
	int N;
	scanf("%d", &N);
	
	int arr[26][26];
	for (int i = 0; i < N; i++) {
		char str[26];
		scanf("%s", &str );

		for (int j = 0; str[j] != '\0'; j++) {
			arr[i][j]=str[j]-'0';			
		}
	}

	//bfs
	
	queue<pair<int, int> > q;
	for (int i = 0; i < N; i++) {
		for (int j = 0; j < N; j++) {
			if (arr[i][j]==1 && ch[i][j]==0) {
				q.push(make_pair(i,j));
				int cnt = 1;
				ch[i][j] = 1;
				
				while (!q.empty()) {
					int curx = q.front().first;
					int cury = q.front().second;
					q.pop();

					for (int k = 0; k < 4; k++) {
						int nextx = curx + x[k];
						int nexty = cury + y[k];

						if (nextx < 0 || nextx > N - 1 || nexty < 0 || nexty > N - 1) continue;

						if (arr[nextx][nexty] == 1 && ch[nextx][nexty] == 0) {
							q.push(make_pair(nextx, nexty));
							cnt++;
							ch[nextx][nexty] = 1;
						}

					}
				}
				ans.push_back(cnt);
			}

		}
	}

	sort(ans.begin(), ans.end());
	printf("%d\n",ans.size());
	for (int i = 0; i < ans.size(); i++) {
		printf("%d\n",ans[i]);
	}

	return 0;
}

