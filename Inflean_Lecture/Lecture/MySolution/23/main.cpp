#include <iostream>
using namespace std;

int main() {
	int N;
	int arr[100001];
	int cnt; 
	int max = -2147000000; 
	
	// ���� �ޱ� 
	scanf("%d",&N);
	for(int i=0; i<N; i++){
		scanf("%d", &arr[i]);
	}
	
	// �ִ� �κ� ���� �Ǻ��ϱ� 
	for(int i=1; i<N; i++){
		if(arr[i-1] <= arr[i]){ // �����ϸ� 
			cnt++;
			if(max < cnt) max = cnt;
		}
		else {
			cnt = 0;
		}
	}
	
	max+= 1;
	
	printf("%d", max);
	return 0;
}

