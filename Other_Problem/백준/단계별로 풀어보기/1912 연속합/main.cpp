#include <iostream>
#include <algorithm>

using namespace std;

int main(){
	
	//연속합...
	//몇개의 연속된 수를 선택해서 구할 수 있는 합 중 가장 큰 합을 구하라
	
	
	int n;
	cin>>n;
	
	vector<int> arr(n+1,0);
	vector<int> dp(n+1,0); //i번째까지의 최대 연속합 
	
	for(int i=0; i<n; i++){
		int a;
		cin>>a;
		arr[i+1] = a;
	} 
	
	int maxRes=arr[1];
	
	for(int i=1; i<=n; i++){
		int continueValue = dp[i-1] + arr[i];
		int newValue = arr[i];
		dp[i] = max(continueValue, newValue);
		//cout<<dp[i-1]<< " ";
		maxRes = max(maxRes, dp[i]);
	}
	
	cout<<maxRes;
	
	return 0;
}

