#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;


int main() {
	
	int N;
	cin>>N;
	
	vector<int> arr(N);
		
	for(int i=0; i<N; i++){
		scanf("%d",&arr[i]);	
	}
	
	sort(arr.begin(),arr.end());
	
	int sum=0;
	int j = N;
	
	for(int i=0; i<arr.size(); i++){
		
		sum += arr[i] * j;
		j--;
	}
	
	cout<<sum;

	return 0;
}

