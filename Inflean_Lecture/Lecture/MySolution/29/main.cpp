#include <iostream>
#include <vector>
using namespace std;

int main() {
	int N;	
	int cnt = 0;
	// ���� �ޱ�
	scanf("%d", &N);

	// ���� �ڸ��� ���3�̸� cnt ���� 
	for(int i=1; i<=N; i++){
		int tmp = i;
		
		while(tmp != 0){
			if(tmp % 10 == 3) cnt++;
			
			tmp /= 10;
		}
		
	}
	
	printf("%d",cnt);
	
	return 0;
}

