#include <iostream>
#include <vector>

using namespace std;

vector< vector<int> > map(16, vector<int>(16,0));
int cnt=0;
int N;

//열 기준 왼쪽만 체크함
bool isRight(int row, int col){

//왼쪽 행 체크
for (int i = 1; i <= col; i++) {
    if (map[row][i] == 1) {
        return false;
    }
}

//왼쪽 대각선 위 체크
for (int i = row, j = col; i >= 1 && j >= 1; i--, j--) {
    if (map[i][j] == 1) {
        return false;
    }
}

//왼쪽 대각선 아래 체크
for (int i = row, j = col; i <= N && j >= 1; i++, j--) {
    if (map[i][j] == 1) {
        return false;
    }
}

return true;


}

void Dfs(int n){
if(n==N+1){ //탐색 완료
cnt++;
return;
}
else{

	//반복문 : 행 기준 탐색 (1~N)
	//-> N개의 모든 열을 재귀하며 탐색 (1~N)
	for(int	row=1; row<=N; row++){
		//맞는 조건만을 탐색
		if( isRight(row,n) ){
			//방문
			map[row][n]=1;
			Dfs(n+1);
			//백트래킹
			map[row][n]=0;
		}
	}

}



}

int main() {


cin >> N;

Dfs(1);

cout << cnt;

return 0;


}
