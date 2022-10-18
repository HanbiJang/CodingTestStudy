#include <iostream>
#include <vector>
#include <queue>

using namespace std;

int x[]={0,0,1,-1};
int y[]={1,-1,0,0};

int map[101][101];

int main() {
	
	int cnt=0;
	int ans=0;
		
	int N,M,K;
	cin>>N>>M>>K;

	for(int i=1; i<=K; i++){
		int r,c;
		cin>>r>>c;
		
		map[r][c]=1;
	}
	
	queue<pair<int,int> > q;
	
	for(int i=1; i<=N; i++){
		for(int j=1; j<=M; j++){
			cnt=0;
			if(map[i][j]==1){
				q.push(make_pair(i,j));
				
				while(!q.empty()){
					int curr = q.front().first;
					int curc = q.front().second;
					q.pop();
					
					for(int i=0; i<4; i++){
						int nextr = curr + x[i];
						int nextc = curc + y[i];
						
						if(nextr < 1 || nextr <1 || nextr >N || nextc >M) continue;
						
						if(map[nextr][nextc]==1){
							map[nextr][nextc]=2;
							q.push(make_pair(nextr,nextc));
							cnt++;
						}
					}
				}
				
				if(ans < cnt) ans = cnt;
			}
		}
	}
	
	cout<<ans;
	
	return 0;
}

