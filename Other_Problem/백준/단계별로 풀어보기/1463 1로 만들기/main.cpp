#include <iostream>
#include <vector>

using namespace std;

int main(){

	//1을 만들어야함! 
	//연산을 사용하는 횟수의 최솟값 구하라
	int N;
	cin>>N;
	
	//== 1부터 시작하여 N을 만드는 가장 빠른 방법을 찾는 것
	vector<int> dp(N+1, N);
	
	dp[1]=0;
	for(int i=2; i<=N; i++){
		if(i%3==0){ //x가 3으로 나누어 떨어지면 3으로 나눔
			dp[i] = min(dp[i], dp[i/3]+1);
		} 
		if(i%2==0){ //x가 2로 나눠지면 2로 나눔
			dp[i] = min(dp[i], dp[i/2]+1);
		}
		dp[i] = min(dp[i], dp[i-1]+1); //1을 뺌
	}
	
	cout<<dp[N];
	
	return 0;
}

