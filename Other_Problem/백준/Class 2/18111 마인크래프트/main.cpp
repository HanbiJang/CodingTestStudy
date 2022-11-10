#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int map[501][501];
int N,M,B; //세로,가로,기존블럭수 

pair<bool,int> count(int mid){ //땅의 높이 
 	bool res = true;
	int cnt1 = 0;
	int cnt2 = 0;
	int item = B; //가지고있는 블럭 수 
	
	//블럭 뽑기 
	for(int i=1; i<=N; i++){	
		for(int j=1; j<=M; j++){
			if(map[i][j]>mid){
				item += map[i][j]-mid;
				cnt1 += 2*(map[i][j]-mid);
			}
		}
	}
	
	//블럭 매꾸기
	for(int i=1; i<=N; i++){
		for(int j=1; j<=M; j++){
			
			if(map[i][j]<mid){ //매꾸기
				if(item>= mid-map[i][j]){ //아이템 충 
					item -= mid-map[i][j];
					cnt2 += mid-map[i][j];
				}
				else{ //아이템 없음 
					res = false;
					break; 
				}
			}
		}
		
		if(!res) break;
		
	}
	//가능여부 & 최소 시간 	
	return make_pair(res ,cnt1 + cnt2);
}

int main(){
	
	cin>>N>>M>>B;
	int mmax=0;
	for(int i=1; i<=N; i++){
		for(int j=1; j<=M; j++){
			int a;
			cin>>a;	 //높이 
			map[i][j] = a;
			
			if(mmax<a) mmax=a;
		}
	}
	
	//땅고르기 최소 시간 + 그 경우의 땅의 높이의 최대값
	
	int ans=0; //땅의 높이 
	int mintime = 2147000000; //최소 시간
	
	for(int i=0; i<=mmax; i++){ //높이 순
		
		pair<bool,int> cnt = count(i); //가능 여부 & 시간 출력 
		
		if(cnt.first && mintime >= cnt.second) { //그중에서 최소 시간 구하기 
			mintime = cnt.second;
			ans = i;
		}
	}
	
	cout<<mintime<<" "<<ans;
	
	return 0;
}

