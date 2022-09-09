#include <iostream>
#include <vector>
#include <cmath>

using namespace std;

int N,M;
int ch[13]; //피자집 고르기용 체크 배열 
vector<pair<int,int> > hs; //집의 위치 
vector<pair<int, int> > pz; //피자집의 위치 
int ans=2147000000;

//거리구하기 
int getDist(int x, int y, int x2, int y2){
	return abs(x-x2) + abs(y-y2);
}

void dfs(int r, int start){
	
	//ch에서 M개를 골랐음
	if(r==M){
		int sum = 0;
		
		//M개 고른 피자집들 각각에 대해 가정집들과의 가장 짧은 거리 구하기
		//***ch에서 꺼내기***
		for(int i=0; i<hs.size(); i++){
			int min_ = 2147000000; //i번째 가정집에 대한 피자집까지의 최소거리 

			for(int j=0;j<M;j++){
				int dist = getDist(pz[ch[j]].first, pz[ch[j]].second, hs[i].first, hs[i].second);
				if(dist<min_) min_ = dist;
			}
			sum += min_; //합하기 
		}
		//이 M개 고른 경우에 대해 이 선택이 가장 짧은 거리인지 확인
		if(ans>sum) ans = sum;
		
		return;
	}
	else{
		//start 번째 선택부터 피자 가게를 정함 
		for(int i=start; i<pz.size(); i++){
			ch[r]=i; //i: 피자 가게 번호  
			dfs(r+1, i+1);
		} 	
		
	}
}


int main() {
	//input 
	scanf("%d %d", &N, &M);
	for(int i=0; i<N; i++){//행0부터 시작 
		for(int j=0; j<N; j++){//열 0부터 시작 
			int n;
			scanf("%d", &n);
			
			if(n==1) hs.push_back(make_pair(i,j));
			else if(n==2) pz.push_back(make_pair(i,j));
		}
	}	
	
	dfs(0,0);
	
	printf("%d",ans);
	
	return 0;
}
