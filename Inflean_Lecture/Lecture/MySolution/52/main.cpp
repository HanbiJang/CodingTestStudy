#include <iostream>
using namespace std;


// ���κ��� �� ���μ��� 2�Ǵ� 3 �Ǵ� 5�θ� �̷������ ��
int a[1501];
int main() {

	// ������Ʈ �˰���
	int N;
	scanf("%d",&N);
	
	int min = 2147000000;
	int p2, p3, p5; // 2�� ��'��'�� / 3�� ��'��'�� / 5�� ��'��'�� 
	
	a[1] = 1;
	p2 = p3 = p5 = 1;
	for(int i=2; i<=N; i++){
		// 2 ���ѰŶ� 3 ���ѰŶ� 5 ���Ѱ� �߿��� ���� ���� �� ã��
		if(a[p2]*2 < a[p3]*3 ) min = a[p2]*2;
		else min = a[p3] * 3;		
		if( a[p5]*5 <  min ) min = a[p5]*5;
		
		// 2,3,5 �߿��� �� ���ߴ����� ���� ����Ʈ�� ������Ŵ 
		if( a[p2]*2 == min ) p2++;
		if( a[p3]*3 == min ) p3++;
		if( a[p5]*5 == min ) p5++;
		
		// i ��°�� �ּ��� ���� �迭�� ä������ 
		a[i] = min; 
	}	
	
	// output
	printf("%d", a[N]);

	return 0;
}

