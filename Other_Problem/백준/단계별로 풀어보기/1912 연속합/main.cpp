#include <iostream>
#include <algorithm>

using namespace std;

int main(){
	
	//������...
	//��� ���ӵ� ���� �����ؼ� ���� �� �ִ� �� �� ���� ū ���� ���϶�
	
	
	int n;
	cin>>n;
	
	vector<int> arr(n+1,0);
	vector<int> dp(n+1,0); //i��°������ �ִ� ������ 
	
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

