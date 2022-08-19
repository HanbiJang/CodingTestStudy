#include <iostream>
using namespace std;


// 소인분해 시 소인수가 2또는 3 또는 5로만 이루어지는 수
int a[1501];
int main() {

	// 투포인트 알고리즘
	int N;
	scanf("%d",&N);
	
	int min = 2147000000;
	int p2, p3, p5; // 2를 곱'할'수 / 3을 곱'할'수 / 5를 곱'할'수 
	
	a[1] = 1;
	p2 = p3 = p5 = 1;
	for(int i=2; i<=N; i++){
		// 2 곱한거랑 3 곱한거랑 5 곱한거 중에서 제일 작은 값 찾음
		if(a[p2]*2 < a[p3]*3 ) min = a[p2]*2;
		else min = a[p3] * 3;		
		if( a[p5]*5 <  min ) min = a[p5]*5;
		
		// 2,3,5 중에서 뭘 곱했는지에 따라서 포인트를 증가시킴 
		if( a[p2]*2 == min ) p2++;
		if( a[p3]*3 == min ) p3++;
		if( a[p5]*5 == min ) p5++;
		
		// i 번째의 최소의 수를 배열에 채워넣음 
		a[i] = min; 
	}	
	
	// output
	printf("%d", a[N]);

	return 0;
}

