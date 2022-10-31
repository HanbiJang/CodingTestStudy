#include <iostream>
#include <vector>
#include <queue>

using namespace std;

int arr[51][51];
int ch[51][51];
int x[]={0,0,1,-1};
int y[]={1,-1,0,0};
vector<pair<int,int> > tmp; //***그때그때의 연합 좌표*** 

int main(){
	
	int ans=0;
	int N,L,R;
	//input 
	scanf("%d %d %d", &N, &L, &R);
	for(int i=1; i<=N; i++){
		for(int j=1; j<=N; j++){
			int a;
			scanf("%d", &a);
			arr[i][j]=a;
		}
	}
	
	bool b=false; //연합이 연속으로 일어나는가 
	
	do
	{
		//초기화
		b=false;
		for(int ii=1; ii<=N; ii++){ 
			for(int jj=1; jj<=N; jj++){
				ch[ii][jj]=0;
			}
		}
		
		//연속 연합 처리 
		for(int i=1; i<=N; i++)
		{
			for(int j=1; j<=N; j++)
			{
				//bfs
				queue<pair<int,int> > q;
				int sum;
				if(ch[i][j]==0){ //start	
					tmp.clear();
									
					q.push(make_pair(i,j)); 			
					ch[i][j]=1;	
					sum=arr[i][j];
					tmp.push_back(make_pair(i,j));						
				}
				
				while(!q.empty()){
					int curx = q.front().first;
					int cury = q.front().second;
					q.pop();
					
					for(int i=0; i<4; i++){
						int nextx= curx + x[i];
						int nexty= cury + y[i];
						
						if(nextx<1||nexty<1||nextx>N||nexty>N) continue;
						
						if(ch[nextx][nexty]==0){
							int gap = abs(arr[curx][cury]-arr[nextx][nexty]);
							if(gap>=L && gap<=R){		
								q.push(make_pair(nextx,nexty)); //***연합인 곳만 push*** 
								ch[nextx][nexty]=1;
								sum+=arr[nextx][nexty];
								tmp.push_back(make_pair(nextx,nexty));
							}
						}
					}	
				}
				
				if(tmp.size()>1){ //연합이 있음 
					b=true;
					{
						for(int i=0; i<tmp.size(); i++){
							arr[tmp[i].first][tmp[i].second]=sum/tmp.size();
						}
					}		
				}
				
			}
		}
		
		if(b) ans++;

	} while(b==true);
	
	//output
	printf("%d", ans);
	
	return 0;
}

