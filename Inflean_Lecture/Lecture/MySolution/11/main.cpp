#include <iostream>

//자연수 N이 입력되면, 1부터 N까지 각 숫자가 몇개 사용되었는지를 출력하라
//자릿수를 카운트 해주면 됨 

int main(int argc, char** argv) {
	int n, i, sum=0, x = 0;
	
	scanf("%d",&n);
	
	for(i =1; i<=n; i++){
		//각 숫자의 자릿수를 더하라 
		x = i;
		
		//자릿수가 몇개인지 세는 법 
		while(x>0){
			x/=10;
			sum++;
		}
	}
	printf("%d",sum);
	return 0;
}
