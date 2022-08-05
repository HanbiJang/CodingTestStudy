#include <iostream>
#include <vector>
using namespace std;

int main() {
	int N;	// 입력 수
	int cnt = 0; // 3의 개수

	int cur, lt, rt, k; // 현재 가르키는 수, 왼쪽에 있는 수, 오른쪽에 있는 수, 자릿수

	// 숫자 받기
	scanf("%d", &N);

	cur = N % 10;
	lt = N / 10;
	rt = 0;
	k = 10;

	// 일의자리, 십의자리, 백의자리, ... 등으로 나눠 수학적으로 풀기
	// cur 자리에 3이 들어갔을 시의 모든 3들어가는 경우를 셈
	while (lt != 0) {
		
		if (cur > 3) {
			// ex) 5 3 6 2 1 , k=100 => 두 경우의 곱
			// [1] 0 0 *3* x x ~ 5 3 *3* x x (lt+1)
			// [2] x x *3* 0 0 ~ x x *3* 9 9 (k)
			cnt += (lt + 1) * k ;

		}
		else if (cur == 3) {
			// ex) 5 3 3 2 1 , k=100 => 두 경우의 '합'
			// [1] 0 0 *3* 2 1 ~ 5 3 *3* 2 1 (lt + 1)
			// [2] 5 3 *3* 0 0 ~ 5 3 *3* 2 1 (rt + 1)
			cnt += k;

		}
		else { // cur < 3
			// 5 3 *6* 2 1 => 두 경우의 곱
			// [1] 0 0 *3* x x ~ 5 2 *3* x x (lt)
			// [2] x x *3* 0 0 ~ x x *3* 9 9 (k)
			cnt += (lt * k);
		}

		k *= 10;
		cur = (N / k) % 10;
		lt = N / (k * 10);
		rt = N % k;	

	}
	
	printf("%d",cnt);
	return 0;
}

