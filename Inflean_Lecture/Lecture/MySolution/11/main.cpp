#include <iostream>

//�ڿ��� N�� �ԷµǸ�, 1���� N���� �� ���ڰ� � ���Ǿ������� ����϶�
//�ڸ����� ī��Ʈ ���ָ� �� 

int main(int argc, char** argv) {
	int n, i, sum=0, x = 0;
	
	scanf("%d",&n);
	
	for(i =1; i<=n; i++){
		//�� ������ �ڸ����� ���϶� 
		x = i;
		
		//�ڸ����� ����� ���� �� 
		while(x>0){
			x/=10;
			sum++;
		}
	}
	printf("%d",sum);
	return 0;
}
