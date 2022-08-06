#include <iostream>
//#include <vector>

using namespace std;

int main() {
	int N;
	int arr[101];

	// get input
	scanf("%d", &N);
	for(int i=0; i<N; i++){
		scanf("%d", &arr[i] );
	}
	
	int i,j;
	// selection sort
	int tmp; 
	for(i=1; i<N; i++){
		tmp =  arr[i]; // save i index element in tmp
		for(j=i-1; j>=0; j--){ // j : i-1 ~ 0
			
			if(arr[j] > tmp){ // arr[j]�� tmp���� ũ�� �ڷ� ���� 
				arr[j+1] = arr[j]; 
			}
			else break;
		}
		
		// arr[i] �� ���� ũ����  �ùٸ� �ڸ��� ã�ư����� �� ū ���ڵ��� �ڷ� ���� 
		// �� �۾� ��, �ùٸ� �ڸ��� (������ �ߺ����� �и� ���� �����Ƿ�) 
		//�� �ε��� �ڸ��� tmp�� ���� ( �ùٸ� �ڸ��� ��ġ ���� ��) 
		
		// ... �� �۾� ������ �� j+1 : �ߺ��� ���ڰ� ����  
		arr[j+1] = tmp; // because arr[i]'s value is keep changing... use old arr[i] (=tmp)
	}
	
	 
	// output
	for (int i=0; i<N; i++){
		printf("%d ", arr[i]);
	}			
	
	return 0;
}

