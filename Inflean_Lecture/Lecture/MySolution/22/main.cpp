#include <iostream>
#include <vector>
using namespace std;

int main() {
	int N, K;
	int sum;
	int max_ = -2147000000;
	// ���� �ޱ� 
	scanf("%d %d", &N , &K);
	vector<int> arr(N);	
	for(int i=0; i<N; i++){
		scanf("%d", &arr[i]);
	}
	
	// ù ��
	for(int i=0; i<K; i++){
		sum += arr[i];
	}  

	// �� ����ϱ� 
	for(int i=1; i<=N-K; i++){
		sum = sum - arr[i-1] + arr[i+K-1];
		if(sum > max_) max_ = sum;
	}
	printf("%d\n", max_);
	return 0;
}

