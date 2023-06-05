#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

//가장 긴 증가하는 부분 수열
 
int main(){
	
	ios_base::sync_with_stdio(false);
	
	int n;
	cin>>n;
	
	vector<int> arr(n);
	
	for(int i=0; i<n; i++){
		cin>>arr[i];
	}
	
	vector<int> dp(n,1);
	
	for(int i=1; i<n; i++){
		int max = 0;
		for(int j=i-1; j>=0; j--){ //이전것과 비교 
			if(arr[i]>arr[j] && max<dp[j]+1){
				max = dp[j]+1;
			}
		}
		if(dp[i]<max) dp[i] = max;
	}
	
	cout<< *max_element(dp.begin(), dp.end());
		
	return 0;
}

