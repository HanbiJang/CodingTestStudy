#include <iostream>
#include <vector>

using namespace std;

int ans[101]; // ���� �迭 => 0���� �ʱ�ȭ 

int main() {
	int N; // ���� ũ�� 
	int arr[101]; // inversion sequence 
		
	// get input
	scanf("%d",&N);
	for(int i=0; i<N; i++){
		scanf("%d", &arr[i] );
	}	

	// �� �ڿ������� ���� ã��
	for(int i=N-1; i>=0; i--){
		int pos = 0;
		int cnt = 0;
		// �ش� �� ���� ū ���� �ε����� ���� 
		for(int j=0; j<N; j++){
			if( cnt == arr[i] ) break; // ū ���� ������ ������ pos�� ���� ���� 
			
			else if( ans[j] > i+1 ){
				cnt++;
			}		
			pos++;		
		}	
		
		// �� ���� �ֵ��� �ڷ� �б� 
		for(int j=N-1; j>=pos; j--){
			ans[j] = ans[j-1]; 
		}
		
		// pos�� �� ��� �ֱ� 
		ans[pos] = i+1;
		
	} 
	
	// output
	for (int i=0; i<N; i++){
		printf("%d ", ans[i]);
	}				
	
	return 0;
}

