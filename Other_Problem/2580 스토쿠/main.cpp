#include <iostream>
#include <vector>
#include <map>

using namespace std;

int arr[82][82];

vector<pair<int, int> > v; //0위치

int d[] = {0,1,1,1,4,4,4,7,7,7}; //사각형

bool isRight(int n) { //조건 확인***
	int cnt = 0;
	int target = arr[v[n].first][v[n].second];
	
	//[1] 네모칸 하나 중복 확인
	int startr = d[v[n].first];
	int startc = d[v[n].second];

	for (int i = 0; i < 3; i++) {
		for (int j = 0; j < 3; j++) {
			if (target == arr[startr +i][startc +j]) cnt++;
			if (cnt == 2) return false;
		}
	}

	//[2] 가로 한줄 중복 확인	
	cnt = 0;
	for (int i = 1; i <= 9; i++) {
		if ( target == arr[v[n].first][i] ) cnt++;
		if (cnt == 2) return false;
	}	

	//[3] 세로 한줄 중복 확인	
	cnt = 0;
	for (int i = 1; i <= 9; i++) {
		if (target == arr[i][v[n].second]) cnt++;
		if (cnt == 2) return false;
	}

	return true;
}

void re(int n) {
	if (n==(int)v.size()) {
		//결과 출력
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
		//선택
		for (int i = 1; i <= 9; i++) {
			arr[v[n].first][v[n].second] = i; //값 넣기

			if (isRight(n)) { //백트래킹 조건 확인***
				re(n + 1); //계속 진행
			}
			//else { //취소***
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

	//결과 출력
	for (int i = 1; i <= 9; i++) {
		for (int j = 1; j <= 9; j++) {
			cout << arr[i][j] << " ";
		}
		cout << endl;
	}

	return 0;
}

