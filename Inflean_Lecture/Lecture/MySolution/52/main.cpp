#include <iostream>


using namespace std;

int main() {
	// ���κ��� �� ���μ��� 2�Ǵ� 3 �Ǵ� 5�θ� �̷������ ��
	int cnt = 1; // ����
	int N = 0;
	int ans = -1;
	int tmp;
	scanf("%d",&N);
 
 	// Ugly Number ���� (Time Limit) 
	for(int i=2; cnt<N;i++){
		tmp = i;
		
		for(int j=2;;){
			if( tmp % j == 0){
				if( j!=2 && j!=3 && j!=5 ) break;
				tmp = tmp/j;
				
				if(tmp == 1) {
					cnt++;				
					if( cnt == N ) ans = i;												
					break;
				}			
								
			} 
			else j++;
		}		
	}	 
	
	
	// output
	printf("%d", ans);

	return 0;
}

