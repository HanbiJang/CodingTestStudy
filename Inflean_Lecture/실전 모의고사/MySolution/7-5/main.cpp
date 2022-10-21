#include <iostream>
#include <vector>
#include <queue>

using namespace std;

int map[101][101]; 

int s[3][101][101]; //3차원배열 

int x[] = {0,0,1,-1};
int y[] = {1,-1,0,0};

int main() {
	
	int N; //맵크 
	cin>>N;

	
	for(int i=1; i<=N; i++){
		for(int j=1; j<=N; j++){
			cin>>map[i][j];

			if(map[i][j]==1){ 
				map[i][j]=-1;
				
				for(int k=0; k<3; k++){
					s[k][i][j] = -1;
				}
			}
		}		
	}
	vector<pair<int,int> > arr;
	for(int i=0; i<3; i++){
		int a,b;
		cin>>a>>b;
		arr.push_back(make_pair(a,b));
		
		queue<pair<int,int> > q;
		q.push(arr.back());
		s[i][a][b] = 1; //1부터 시작 
		
		while(!q.empty()){
			int curr = q.front().first;
			int curc = q.front().second;
			q.pop();
			
			for(int j=0; j<4; j++){
				int nextr = curr + x[j];
				int nextc = curc + y[j];
				if(nextr<1 || nextc<1 || nextr>N ||nextc>N||s[i][nextr][nextc]==-1)continue;
				
				if(s[i][nextr][nextc]==0){
					q.push(make_pair(nextr,nextc));
					s[i][nextr][nextc] = s[i][curr][curc] + 1;
				}
			}
		}
//		cout<<" === " <<endl;
//		for(int j=1; j<=N; j++){
//			for(int k=1; k<=N; k++){cout<<s[i][j][k]<<" ";}
//			cout<<endl;
//		}
	}
	int ans=0;
	int min_=2147000000; //같은 지점의 최소 시간
	 
	for(int j=1; j<=N; j++){
		for(int k=1; k<=N; k++){
			int n;
			n = max(s[0][j][k],s[1][j][k]);
			n = max(n,s[2][j][k]);
			
			//모두 도달 가능해야 함 
			if( (s[0][j][k]>0 && s[1][j][k]>0 && s[2][j][k]>0) && n>0 && min_ > n) min_ = n; //***
			
		}		
	}
	
	//cout<<min_<<" "<<endl;
	//갯수 찾기 
	for(int j=1; j<=N; j++){
		for(int k=1; k<=N; k++){
			if
			( 
			s[0][j][k] <= min_ && s[0][j][k] > 0 &&
			s[1][j][k] <= min_ && s[1][j][k] > 0 &&
			s[2][j][k] <= min_ && s[2][j][k] > 0 
			)
			{
				//cout<<j<<" "<<k<<endl;
				ans++;
			}
		}		
	}
	
	if(ans==0) cout<<-1;
	else cout<<ans;

	return 0;
}

