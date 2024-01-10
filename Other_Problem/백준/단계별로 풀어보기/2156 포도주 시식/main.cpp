/*
포도 주 시식회
포도주 잔이 일렬로 놓여있음
선택 시 포도주 원샷
원래 위치로 다시 놓음
연속으로 놓인 3잔 선택 불가
1~n개의 포도주 잔 & 포도주의 양 주어짐
마실 수 있는 최대의 양을 구하라 
*/ 

#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;
int main(){
	
	int n; //num of wine
	cin>>n;
	
	vector<int> dp(n+1,0);
	vector<int> wine(n+1,0);
	for(int i=1; i<=n; i++){
		int val;
		cin>>val;
		
		wine[i]=val;
	}
	
	//<선택지>
	//[1] i번째 와인을 선택하지 않는 경우
	//[2] i번째 와인을 선택하고, 이전 와인을 선택하지 않는 경우
	//[3] i번째와 i-1번째 와인을 선택하고, 그 이전 와인을 선택하지 않는 경우
	
	dp[1] = wine[1];
	dp[2] = wine[1]+wine[2];
	
	for(int i=3; i<=n; i++){
		int a,b,c;
		
		//[1] : i번째 와인을 선택하지 않는 경우
		a = dp[i-1]; 
		//[2] : i번째 와인을 선택하고, 이전 와인을 선택하지 않는 경우
		b = wine[i] + dp[i-2];
		//[3] : i번째와 i-1번째 와인을 선택하고, 그 이전 와인을 선택하지 않는 경우
		c = wine[i] + wine[i-1] + dp[i-3];
		
		dp[i] = max(max(a,b),c);
	}
	
	cout<<*max_element(dp.begin(), dp.end());
	
	return 0;
}

