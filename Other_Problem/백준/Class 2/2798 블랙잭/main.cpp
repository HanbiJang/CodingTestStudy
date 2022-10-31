#include <iostream>
#include <vector>
#include <string>

#include <algorithm>

using namespace std;

int sum=0;
int max_=0;
void re(vector<int>& arr, int n, int N, int M, int start){
	if(n==3){
		if(max_<sum && sum<=M) max_=sum;
		return;	
	}
	else{
		for(int i=start; i<arr.size(); i++){
			sum+=arr[i];
			re(arr,n+1,N,M,i+1);
			sum-=arr[i];
		}
	}
}

int main(){

	int ans = 0;
	int N,M;
	cin>>N>>M;
	
	vector<int> arr;
	for(int i=0; i<N; i++){
		int a;
		cin>>a;
		arr.push_back(a);
	}
	
	//M을 넘지 않는 3개의 수의 합출력
	re(arr,0,M,M,0); 
	
	cout<<max_;

	return 0;
}

