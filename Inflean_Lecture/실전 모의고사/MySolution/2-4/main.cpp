#include <iostream>
#include <vector>
#include <string>
#include <queue>

using namespace std;

/*
 0 : ���� �̵� ����
 1: ���� �̵� �Ұ�
 2 ���� ���� ��ġ
 3: ��� ��ġ (�� �ϳ�)
 4 : ����� ��ġ (������)
������ ������ ���� �ִܰŸ� ���
*/

int map[1001][1001]; //����
int map1[1001][1001]; //���� ***
int map2[1001][1001]; //��� ***
int ch[1001][1001];

int x[] = { 0,0,1,-1 };
int y[] = { 1,-1,0,0 };

int W, H; //��,��

void clear() {
	for (int i = 0; i <= H; i++) {
		for (int j = 0; j <= W; j++) {
			ch[i][j] = 0;
		}
	}
	return;
}

void BFS ( int map_[1001][1001],int startr, int startc) {
	clear();
	queue<pair<int, int> > q;
	q.push(make_pair(startr, startc));

	while (!q.empty()) {
		int curr = q.front().first;
		int curc = q.front().second;
		q.pop();

		for (int i = 0; i < 4; i++) {
			int nextr = curr + x[i];
			int nextc = curc + y[i];

			if (nextr<1 || nextc<1 || nextr>H || nextc>W || map[nextr][nextc]==1) continue;

			if (ch[nextr][nextc] == 0) {
				ch[nextr][nextc] = 1;
				q.push(make_pair(nextr, nextc));
				map_[nextr][nextc] = map_[curr][curc] + 1;
			}
		}
	}

	return;
}



int main() {

	cin >> W >> H;
	int startr, startc;
	int nstartr, nstartc;
	for (int i = 1; i <= H; i++) {
		for (int j = 1; j <= W; j++) {
			cin >> map[i][j];

			if (map[i][j] == 2) {
				startr = i;
				startc = j;
			}
			if (map[i][j] == 3) { //��� ��ġ 
				nstartr = i;
				nstartc = j;
			}
		}
	}

	//(1) �������� ~ �ٸ� ����
	map1[startr][startc]=0; //���� ����	
	BFS(map1, startr, startc);

	//(2) ���
	map2[nstartr][nstartc]=0; //��� ����
	BFS(map2, nstartr, nstartc);
	
	int tmp;
	int min_=2147000000;
	
	for (int i = 1; i <= H; i++) {
		tmp=min_;
		for (int j = 1; j <= W; j++) {
			int rr1,cc1;
			if(map[i][j]==4 && map1[i][j]!=0 && map2[i][j]!=0){ //����� 
				rr1=i;
				cc1=j;
				
				tmp = map1[rr1][cc1] + map2[rr1][cc1];
				if(tmp < min_) min_ = tmp;
			}		
		}
	}
	
	cout<<min_;
	
//	for (int i = 1; i <= H; i++) {
//		for (int j = 1; j <= W; j++) {
//			cout<<map2[i][j]<<" ";	
//		}
//		cout<<endl;
//	}

	return 0;
}

