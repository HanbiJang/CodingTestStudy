#include <iostream>
#include <vector>

using namespace std;

vector< vector<int> > map(16, vector<int>(16,0));
int cnt=0;
int N;

//�� ���� ���ʸ� üũ��
bool isRight(int row, int col){

//���� �� üũ
for (int i = 1; i <= col; i++) {
    if (map[row][i] == 1) {
        return false;
    }
}

//���� �밢�� �� üũ
for (int i = row, j = col; i >= 1 && j >= 1; i--, j--) {
    if (map[i][j] == 1) {
        return false;
    }
}

//���� �밢�� �Ʒ� üũ
for (int i = row, j = col; i <= N && j >= 1; i++, j--) {
    if (map[i][j] == 1) {
        return false;
    }
}

return true;


}

void Dfs(int n){
if(n==N+1){ //Ž�� �Ϸ�
cnt++;
return;
}
else{

	//�ݺ��� : �� ���� Ž�� (1~N)
	//-> N���� ��� ���� ����ϸ� Ž�� (1~N)
	for(int	row=1; row<=N; row++){
		//�´� ���Ǹ��� Ž��
		if( isRight(row,n) ){
			//�湮
			map[row][n]=1;
			Dfs(n+1);
			//��Ʈ��ŷ
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
