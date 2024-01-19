#include <iostream>
#include <vector>

using namespace std;

/* 구간합 */
int main(){
	
	//연속적인 며칠동안의 온도의 합이 가장 큰 값을 구하라 
	
	int n,k; //n: 온도 측정한 날짜의 수, k 합해야하는 연속적 날짜
	cin>>n>>k;
	
	vector<int> tem;
	for(int i=0; i<n; i++){
		int a;
		cin>>a;
		
		tem.push_back(a);
	}
	
	//연속적인 며칠 동안의 합이 가장 큰 값을 계산하라 
	//k만큼의 합을 구함
	long long maxSum = -2147000000;
	long long sum=0;
	for(int i=0; i<k; i++){
		sum += tem[i];
	}
	
	maxSum = sum;
	
	for(int i=k; i<n; i++){
		long long tmpSum = sum + tem[i] - tem[i-k];
		sum = tmpSum;
		//cout<<sum<<"+"<<tem[i]<<"-"<<tem[i-k]<<" = "<<tmpSum<<endl;
		if(maxSum < tmpSum) maxSum = tmpSum;
	}
	cout<<maxSum;
	
	return 0;
}

