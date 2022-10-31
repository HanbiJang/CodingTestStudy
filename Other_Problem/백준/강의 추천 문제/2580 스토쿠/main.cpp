#include <iostream>
#include <vector>
#include <map>

using namespace std;

int arr[82][82];

vector<pair<int, int> > v; //0��ġ

int d[] = {0,1,1,1,4,4,4,7,7,7}; //�簢��

bool isRight(int n) { //���� Ȯ��***
	int cnt = 0;
	int target = arr[v[n].first][v[n].second];
	
	//[1] �׸�ĭ �ϳ� �ߺ� Ȯ��
	int startr = d[v[n].first];
	int startc = d[v[n].second];

	for (int i = 0; i < 3; i++) {
		for (int j = 0; j < 3; j++) {
			if (target == arr[startr +i][startc +j]) cnt++;
			if (cnt == 2) return false;
		}
	}

	//[2] ���� ���� �ߺ� Ȯ��	
	cnt = 0;
	for (int i = 1; i <= 9; i++) {
		if ( target == arr[v[n].first][i] ) cnt++;
		if (cnt == 2) return false;
	}	

	//[3] ���� ���� �ߺ� Ȯ��	
	cnt = 0;
	for (int i = 1; i <= 9; i++) {
		if (target == arr[i][v[n].second]) cnt++;
		if (cnt == 2) return false;
	}

	return true;
}

void re(int n) {
	if (n==(int)v.size()) {
		//��� ���
		for (int i = 1; i <= 9; i++) {
			for (int j = 1; j <= 9; j++) {
				cout << arr[i][j] << " ";
			}
			cout << endl;
		}
		exit(0);
		return;
	}
	else {
		//����
		for (int i = 1; i <= 9; i++) {
			arr[v[n].first][v[n].second] = i; //�� �ֱ�

			if (isRight(n)) { //��Ʈ��ŷ ���� Ȯ��***
				re(n + 1); //��� ����
			}
			//else { //���***
			//	arr[v[n].first][v[n].second] = 0;
			//}		
		}

		arr[v[n].first][v[n].second] = 0;
	}
}

int main() {

	for (int i = 1; i <= 9; i++) {
		for (int j = 1; j <= 9; j++) {
			int tmp;
			cin >> tmp;
			if (tmp == 0) v.push_back(make_pair(i,j));
			arr[i][j] = tmp;
		}
	}

	re(0);

	//��� ���
	for (int i = 1; i <= 9; i++) {
		for (int j = 1; j <= 9; j++) {
			cout << arr[i][j] << " ";
		}
		cout << endl;
	}

	return 0;
}

