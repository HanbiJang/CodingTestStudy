#include <iostream>
#include <vector>
#include <string>
#include <map>

using namespace std;

int map_[9][9];
vector<pair<int,int> > arr; //zero ��ġ 

int sq[] = {0,0,0,3,3,3,6,6,6};

bool isRight(int n){ //���� ���� ��� 

	int tmp = map_[arr[n].first][arr[n].second];
	
	//���� Ȯ��
	for(int i=0; i<9; i++){
		if(tmp == map_[arr[n].first][i] && i!=arr[n].second){
			return false;
		}
	}
	
	//���� Ȯ��
	for(int i=0; i<9; i++){
		if(tmp == map_[i][arr[n].second] && i!=arr[n].first ){
			return false;
		}
	}
	
	//�׸� Ȯ�� 
	for(int i=0; i<3; i++){
		for(int j=0; j<3; j++){
			if(tmp == map_[sq[arr[n].first]+i][sq[arr[n].second]+j] && sq[arr[n].first]+i!=arr[n].first  && sq[arr[n].second]+j!=arr[n].second){
				return false;
			}
		}
	}

	return true;
}


void re(int n){
	if(n==arr.size()){ //��� ĭ�� ä���� �� 
		//���
		for(int i=0; i<9; i++){
			for(int j=0; j<9; j++){
				cout<<map_[i][j]<<" ";
			}
			cout<<endl;
		}
		exit(0);
		return;
	}
	
	for(int i=1; i<=9; i++){
		map_[arr[n].first][arr[n].second] = i; //�ӽ÷� �� �־�� 
		
		if(isRight(n)){
			re(n+1);
		}
		map_[arr[n].first][arr[n].second]=0; //���
	}
}

int main() {
	
	for(int i=0; i<9; i++){
		for(int j=0; j<9; j++){
			
			int n;
			cin>>n;
			map_[i][j]=n;
			if(n==0){
				arr.push_back(make_pair(i,j));
			}
			
		}	
	}
	
	re(0);
	
	return 0;
}

