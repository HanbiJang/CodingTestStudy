#include <iostream>
#include <vector>

using namespace std;


int main() {
	
	int N, K;
	cin>>N>>K;
	
	vector<int> arr(N+1);
	
	for(int i=1; i<=N; i++){
		scanf("%d", &arr[i]);
	}
	
	int sum=K;
	int cnt=0;
	for(int i=N; i>=1; i--){
		while(sum!=0 && sum >= arr[i]){
			sum -= arr[i];
			cnt++;
			if(sum==0) break;
		} 
	}

	cout<<cnt;

	return 0;
}

