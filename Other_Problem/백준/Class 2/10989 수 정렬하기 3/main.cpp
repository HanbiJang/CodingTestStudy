#include <iostream>
#include <vector>

using namespace std;

int arr[10010]; //���� ������ŭ �迭 �Ҵ� => ������ ������ ��
//short ���̸� �ȵ� 

//***ī���� ����!!!  : ���� ������ �۾Ƽ� ���� 
int main(){ 
	
	int N;
	scanf("%d",&N);
	
	for(int i=0; i<N; i++){
		int a;
		scanf("%d",&a);
		
		arr[a]++;
	}
	
	for(int i=1; i<=10000; i++){ //***���� �������� �ݺ� 
		
		for(int j=0; j<arr[i]; j++){
			printf("%d\n",i);
		}
		
	}
	
	return 0;
}

