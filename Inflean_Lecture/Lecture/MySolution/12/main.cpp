#include <iostream>

/*
[1] 숫자 개념으로 풀기 => 더더 빠름

1자리 수 = 9개 => 숫자 수 1*9 = 9개 
2자리 수 = 90개=> 숫자 수 2*90 = 180개 
3자리 수 = 900개=> 숫자 수 3*900 = 270개 
4자리 수 = 9000개=> 숫자 수 4*9000=3600개 
...

[2] 방법
1. n이 위에서 몇번째 자리수인지 파악하 
2. 실제 수 99...인(자리수)에서기 n을 빼어서 자릿수 만큼 곱한 수들을 더해준다 


*/

int main(int argc, char** argv) {
	int n, sum=0, c=1, d=9, res=0;
	
	scanf("%d",&n);
	while(sum +d <n){
		res += c*d;
		sum += d;
		c++;
		d*=10;	
	}
	
	res = res + (n-sum)*c;
	printf("%d",res);
	
	
	return 0;
}
