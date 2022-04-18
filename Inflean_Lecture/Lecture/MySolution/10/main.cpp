#include <iostream>
#include <math.h>

//자릿수의 합
//N개의 자연수가 입력 되면 각 자연수의 자릿수의 합을 구하고, 
//그 자릿수의 합이 최대인 자연수를 출력하라
//자연수의 자릿수를 구하는 함수는 int digit_sum(int x) 를 작성하라 


//자릿수 구하기 **
int digit_sum(int x){
	int tmp, sum = 0 ;
	
	//!!**중요**!! 
	//자릿수 구하기 (제일 오른쪽 자릿수 -> 왼쪽 자릿수를 더해가는 식) 
	while(x>0){
		tmp = x%10; // 10으로 나눈 나머지 : 제일 끝자리 수 출력 
		x /= 10; // = 제일 끝자리를 뺀 수 ... 8ㅅ8 
		sum += tmp;
	}
	
	
	return sum;
}

int main(int argc, char** argv) {
	int n , num, i, sum, max = -214000000, res;
	
	scanf("%d",&n);
	
	for(i=0; i<n; i++){
		scanf("%d",&num); //여러개의 숫자를 한개씩 읽음 
		// 사용자는 몰아서 숫자를 쓸 수 있지만, 스페이스 (공백)가 입력에 포함되지 않음 => 엔터친 것과 같은 의미 
		 
		sum = digit_sum(num);
		
		if(max < sum){
			max = sum;
			res = num;
		}
		//자릿수의 합이 같으면 자연수 자체 크기가 큰 것으로  
		else if(sum == max){
			if(res < num){
				res = num;
			}
		} 
	
	}
	
	printf("%d\n",res);
	
	
	return 0;
}
