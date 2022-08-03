#include <iostream>
#include <vector>
using namespace std;

int main() {
	int N;	
	
	// ���� �ޱ�
	scanf("%d", &N);
	vector<int> prr(N+1,0);  // �������� �� �迭 (j�� �������� �� ��ü�� N+1����) 
	
	for(int i=2; i<=N; i++){
		int tmp = i; // ������ �� (i�� ���� �ٲ��� �������� �ӽ÷�) 
		int j = 2; // ������ �Ҽ� 
		
		// ������ ���� ������ '�Ҽ�'�θ� �������� ���� 
		// : ���� ��(2~)���� ������� �������Ƿ� ���ռ��� ������ ���� ���� 
		while(tmp != 1){
			if(tmp%j == 0){ 
				tmp/=j;
				prr[j]++;
			}
			else j++; // j�� �������� ���� ��� j+1�� �Ѽ� ũ���� 
		}
	}
	
	printf("%d! = ", N);
	for(int i=2; i<=N; i++){
		if(prr[i]!=0) // N!�� (= 2 * 3 * ... * N) N������ �Ҽ��� ������ ������ 
			printf("%d ", prr[i]);
	}
	
	
	
	return 0;
}

