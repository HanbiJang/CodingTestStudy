#include <iostream>
using namespace std;

// ���Ʈ ���� 
int arr2[100];
int main() {
	int N;	
	int arr[101];
	int brr[101];
	
	// ���� �ޱ�
	scanf("%d", &N);
	for(int i=0; i<N; i++){
		scanf("%d", &arr[i]);
		// b �迭 �ʱ�ȭ
		brr[i] = 1;
	}
	
	// ** ��� ó�� **
	for(int i=0; i<N; i++){
		for(int j=0; j<N; j++){
			if(arr[i] < arr[j]){   // ������ �� ������ ��� ������Ŵ 
				brr[i]++;
			}
		}
	}
	
	// ����ϱ� 
	for(int i=0; i<N; i++){
		printf("%d ", brr[i]);
	}

	return 0;
}

