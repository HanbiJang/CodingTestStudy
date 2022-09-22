#include <vector>
#include <iostream>
#include <algorithm>

using namespace std;

int main() {
	
	int map[101][101];
	int m=5000; //큰값 
	
	int min_=2147000000;
	vector<int> score; //학생들 점수 
	vector<int> ans;
    //input
	int N;
	scanf("%d", &N);
	
	for(int i=1; i<=N; i++){ //초기화
		for(int j=1; j<=N; j++){
			if(i==j) map[i][j]=0;
			else map[i][j]=m; //큰값 

		}
	}
	
	int a=0,b=0;
	while(a!=-1 && b!=-1){
		scanf("%d %d", &a, &b);
		map[a][b]=1; 
		map[b][a]=1; 
	} 
	
	//플로이드 와샬
	for(int k=1; k<=N; k++){ //경유지(중간다리 친구) k 
		
		for(int i=1; i<=N; i++){
			for(int j=1; j<=N; j++){
				map[i][j]= min(map[i][j],map[i][k]+map[k][j]); //갱신
				map[j][i]= min(map[i][j],map[i][k]+map[k][j]); //갱신  
			}
		}
	
	}
	
	//결과 해석
		 
	for(int i=1; i<=N; i++){ //학생 점수 찾기
		int max_=-2147000000;
		for(int j=1; j<=N; j++){
			if(max_<map[i][j] && i!=j){
				max_=map[i][j];	
			}
		}
		score.push_back(max_); //학생 점수 
	}
	
	//학생 점수 중 최소값인 회장후보 찾기 
	min_= *min_element(score.begin(),score.end());
	
	for(int i=0; i<score.size();i++){
		if(min_==score[i]){
			ans.push_back(i+1);
		}
	}
	
	//output 
	printf("%d %d\n",min_, ans.size());
	for(int i=0; i<ans.size(); i++){
		printf("%d ",ans[i]);
	}
	
    return 0;
}
