#include <iostream>
#include <vector>

using namespace std;

int main() {
	int S,N; // ĳ�� ũ�� & �۾��� 
	int arr[1001]; // �۾� ��� �迭 
	int cash[20]; // ĳ�� 
	
	// get input
	scanf("%d %d", &S ,&N);
	for(int i=0; i<N; i++){
		scanf("%d", &arr[i] );
	}
	
	// ���� ���� '����'
	// [0] ��Ʈ, ����Ʈ�� ���� = �迭�� �ڷ� �̴� �ε��� ���� 
	for(int i=0; i<N; i++){
		int pos = -1; // ĳ�� ��Ʈ or ����Ʈ �ε��� 
		
		for(int j=0; j<S; j++){ // ĳ�ÿ� �۾��� �ִ��� ã�� 
			if(cash[j] == arr[i]) pos = j; // ĳ�� ��Ʈ 
		}
		// ĳ�� ����Ʈ 
		// [1] ĳ�ð� ����Ʈ��� => �迭 '��ü'�� �ڷ� �б�  
		if(pos == -1){ 
			for(int j= S-1; j>=1; j--){
				cash[j] = cash[j-1];
			}
		}
		// ĳ�� ��Ʈ 
		// [2] ĳ�ð� ��Ʈ��� => �迭 �� ĳ�ð� ��Ʈ�� �� 1ĭ ���� ~ �Ǿձ��� �ڷ� �б� 
		else { 
			for(int j=pos; j>=1; j--){
				cash[j] = cash[j-1];
			}
		}
		
		// �� �տ� �۾� �߰��ϱ� (���� : ����Ʈ,��Ʈ ���) 
		cash[0] = arr[i];

	}
	
	// output
	for (int i=0; i<S; i++){
		printf("%d ", cash[i]);
	}				
	
	return 0;
}

