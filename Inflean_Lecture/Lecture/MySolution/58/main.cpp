#include <iostream>

using namespace std;

void  re(int i){
	
	if(i>7){
		return;
	}
	else{
		// printf("%d ",i); // ���� ��ȸ 
		re(i*2); 
		// printf("%d ",i); // ���� ��ȸ 
		re(i*2+1);
		printf("%d ",i); // ���� ��ȸ 
	}
} 

int main() {
	
	int N;
	scanf("%d", &N); // N������ ����Ʈ�� 7���� ��ȸ 
	
	re(N);

	 
	return 0;
}

