#include <iostream>
#include <vector>
#include <queue>
#include <map>

using namespace std;

int tmp[1001][1001];
int map_[1001][1001];

int main() {
	
	map<int,int> m;
	int N,M;
	cin>>N>>M;
	for(int i=1; i<=N; i++){
		string str;
		cin>>str;
		
		for(int j=0; j<M; j++){
			map_[i][j+1] = str[j]-'0';
		}
	}
	
	//사각형에서 가능한 사각형 크기 저장
	for(int i=1; i<=N; i++){
		for(int j=1; j<=M; j++){
			tmp[i][j] = min(tmp[i-1][j], tmp[i][j-1]);
			tmp[i][j] = min(tmp[i][j], tmp[i-1][j-1]);
			if(map_[i][j]==1) tmp[i][j]++;
			else tmp[i][j]=0;
			//cout<<tmp[i][j]<<" ";
		}
		//cout<<endl;
	} 
	
	//크기 세기 
	for(int i=1; i<=N; i++){
		for(int j=1; j<=M; j++){
			m[tmp[i][j]]++;
			
			for(int k=1; k<tmp[i][j]; k++){ //하위도 증가 
				m[k]++; 
			}
			
		}
	}
	
	for(auto i : m){
		if(i.first > 0){
			cout<<i.first<<" "<<i.second<<endl;
		}
	}

	return 0;
}

