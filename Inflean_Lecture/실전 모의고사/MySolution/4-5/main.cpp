#include <iostream>
#include <vector>
#include <queue>

using namespace std;

int map[31][31];
int ch[31][31];
int x[]={0,0,1,-1};
int y[]={1,-1,0,0};

int main() {
	int ans=0;
	int N;
	cin>>N;
	for(int i=1; i<=N; i++){
		for(int j=1; j<=N; j++){
			int n;
			cin>>n;
			map[i][j]=n;
		}	
	}

	queue<pair<int,int> > q;
	for(int i=1; i<=N; i++){
		for(int j=1; j<=N; j++){
			if(map[i][j]==2) {
				q.push(make_pair(i,j));
				ch[i][j]=1;
				break; //***********
			}
		}
	}

	while(!q.empty()){
		int curr=q.front().first;
		int curc=q.front().second;
		q.pop();		
		
		for(int i=0; i<4; i++){
			int nextr = curr+x[i];
			int nextc = curc+y[i];
			
			if(nextr<1||nextc<1||nextr>N||nextc>N|| (map[nextr][nextc]==1)) continue;
			if(ch[nextr][nextc]==0){
				ans = max(ch[curr][curc]+1 , ans);
				ch[nextr][nextc]= ch[curr][curc]+1; //*********ch에 퍼지는 수를 적게됨 
				q.push(make_pair(nextr,nextc));
				//if(map[nextr][nextc]==0) cnt++; //없어도됨******* 
			}
		}	
	}
	
	cout<<ans-1;
	return 0;
}

