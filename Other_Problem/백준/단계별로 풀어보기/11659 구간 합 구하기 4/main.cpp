#include <iostream>
#include <vector>

using namespace std;

int main(){
	
	//수 N개가 주어졌을 때, i번째 수 부터 j번째 수까지 합을 구하라
	int N,M; 
	scanf("%d %d",&N,&M);
	
	vector<int> dp(N+1, 0);
	
	for(int i=1; i<=N; i++){
		int a;
		scanf("%d",&a);
		
		dp[i] = a;
		
		//누적합 만들기 
		dp[i] = dp[i-1] + dp[i];
	}
	cout<<endl;
	
	for(int i=0; i<M; i++){
		int a,b;
		scanf("%d %d",&a, &b);
		
		int sum = dp[b] - dp[a-1];
		printf("%d\n",sum);
	}
	
			
	return 0;
}

