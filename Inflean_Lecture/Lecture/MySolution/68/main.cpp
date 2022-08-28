#include <iostream>
#include <vector>

using namespace std;

int N,M;

vector< pair<int,int> > arr[22]; // {방향,비용} *****
int ch[22];
int cost=2147000000,sum=0;

void re(int n){
	
	if(n==N){
		if(cost>sum) cost = sum;
		return;
	}
	else{
		
		for(int i=0; i<arr[n].size(); i++){
			if( ch[ arr[n][i].first ] == 0 ){
				//방문
				sum+=arr[n][i].second;
				ch[ arr[n][i].first ] =1;
				re( arr[n][i].first );
				//취소 
				sum-=arr[n][i].second;
				ch[ arr[n][i].first ] =0;
			}
		}
				
	}
	
}

int main() {	
	
	scanf("%d %d", &N, &M);
	
	for(int i=1; i<=M; i++){
		int a,b,cos;
		scanf("%d %d %d",&a,&b,&cos);
		arr[a].push_back({b,cos}); // [1]{,} 혹은 [2]make_pair(b,cos) 
	}
	
	ch[1]=1;
	re(1);
	printf("%d",cost);	

	return 0;
}

