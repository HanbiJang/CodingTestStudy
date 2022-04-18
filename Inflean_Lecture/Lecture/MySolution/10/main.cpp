#include <iostream>
#include <math.h>

//�ڸ����� ��
//N���� �ڿ����� �Է� �Ǹ� �� �ڿ����� �ڸ����� ���� ���ϰ�, 
//�� �ڸ����� ���� �ִ��� �ڿ����� ����϶�
//�ڿ����� �ڸ����� ���ϴ� �Լ��� int digit_sum(int x) �� �ۼ��϶� 


//�ڸ��� ���ϱ� **
int digit_sum(int x){
	int tmp, sum = 0 ;
	
	//!!**�߿�**!! 
	//�ڸ��� ���ϱ� (���� ������ �ڸ��� -> ���� �ڸ����� ���ذ��� ��) 
	while(x>0){
		tmp = x%10; // 10���� ���� ������ : ���� ���ڸ� �� ��� 
		x /= 10; // = ���� ���ڸ��� �� �� ... 8��8 
		sum += tmp;
	}
	
	
	return sum;
}

int main(int argc, char** argv) {
	int n , num, i, sum, max = -214000000, res;
	
	scanf("%d",&n);
	
	for(i=0; i<n; i++){
		scanf("%d",&num); //�������� ���ڸ� �Ѱ��� ���� 
		// ����ڴ� ���Ƽ� ���ڸ� �� �� ������, �����̽� (����)�� �Է¿� ���Ե��� ���� => ����ģ �Ͱ� ���� �ǹ� 
		 
		sum = digit_sum(num);
		
		if(max < sum){
			max = sum;
			res = num;
		}
		//�ڸ����� ���� ������ �ڿ��� ��ü ũ�Ⱑ ū ������  
		else if(sum == max){
			if(res < num){
				res = num;
			}
		} 
	
	}
	
	printf("%d\n",res);
	
	
	return 0;
}
