#include <iostream>
#include <vector>

using namespace std;

int N;
int map[21][21];
int ans[21][21];

int re(int x, int y){
	if(x<1 || x>N || y<1 || y>N) return 2147000000; //가장자리를 무한대로  
	if(ans[x][y]!=0) return ans[x][y];
	else{		
		return ans[x][y]=min(map[x][y]+re(x-1,y), map[x][y]+re(x,y-1));	
	}
}

int main() {

	
	//input	
	scanf("%d",&N); 
	//for(int i=0; i<=N; i++) for(int j=0; j<=N; j++) map[i][j]=2147000000;
	for(int i=1; i<=N; i++) for(int j=1; j<=N; j++) scanf("%d", &map[i][j]);		
	
	ans[1][1]=map[1][1];
	re(N,N);
	
	printf("%d",ans[N][N]);

	return 0;
}
