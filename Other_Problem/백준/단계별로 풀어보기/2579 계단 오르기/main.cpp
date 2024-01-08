#include <iostream>
#include <vector>
using namespace std;


int main(){
	
	
	vector<int> floor;
	//계단은 한번에 1,2 계단씩 오를 수 있음
	//(1,1)이런식으로 밟으면 안 됨 
	//마지막 도착 계단을 밟아야함
	
	//계단의 개수
	int n;
	cin>>n;
	
	//제일 아래에 놓인 계단부터의 점수
	for(int i=0; i<n; i++){
		int score;
		cin>>score;
		
		floor.push_back(score);
	}
	
	vector<pair<int,int> > dp(n+1,make_pair(0,0)); //dp[].first는 2칸 진행,  dp[].second은 1칸 진행
	//각 계단에 올랐을때의 점수 최대값 
	//첫번째 칸
	dp[1] = make_pair(0,floor[0]); 
	dp[2] = make_pair(floor[1], floor[0]+floor[1]);
	for(int i=3; i<=n; i++){
		//2칸
		dp[i].first = max(dp[i-2].first, dp[i-2].second)+floor[i-1];
		//1칸
		 
		//직전에 1칸1칸 오름 
		dp[i].second = dp[i-1].first + floor[i-1];	
		
	}
	
	cout<<max(dp[n].second,dp[n].first);

	return 0;
}

