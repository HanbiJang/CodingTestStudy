#include <iostream>
#include <string>
#include <vector>
#include <queue>
#include <algorithm>

using namespace std;

int map[100][100];

int x[4]={0,0,1,-1};
int y[4]={1,-1,0,0};

int main(){
	
	vector<int> ans;
	int M,N,K; //MxN, K개의 사각형 
	scanf("%d %d %d", &M, &N, &K);
	for(int i=0; i<K; i++){ //사각형 정보 
		int x1, y1, x2, y2;
		scanf("%d %d %d %d", &x1, &y1, &x2, &y2);
		
		for(int k=x1; k<x2; k++){ 
			for(int r=y1; r<y2; r++){
				map[r][k]=1;
			}
		}
	}

	
	for(int i=0; i<M; i++){ //가로 
		for(int j=0; j<N; j++){ //세로 
			
			if(map[i][j]==0){
				queue<pair<int,int> > q;
				q.push(make_pair(i,j));
				map[i][j]=1;
				int cnt=1; //면적 
				
				while(!q.empty()){
					int xx=q.front().first; 
					int yy=q.front().second;
					q.pop();

					for(int k=0; k<4; k++){
						int nextx=xx+x[k]; 
						int nexty=yy+y[k];
						
						if(nextx<0 || nextx>=M || nexty<0 || nexty>=N) continue;
						
						if(map[nextx][nexty]==0){
							map[nextx][nexty]=1;
							q.push(make_pair(nextx, nexty));
							cnt++;
						}
							
					}	
				}
			
				ans.push_back(cnt);	
			}
			
		}	
	}
	
	printf("%d\n", ans.size());
	sort(ans.begin(), ans.end());
	for(int i=0; i<ans.size();i++){
		printf("%d ", ans[i]);
	}
	
	
	return 0;
	
}
