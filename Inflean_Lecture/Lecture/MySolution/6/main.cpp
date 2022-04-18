//#include <iostream>
#include <stdio.h>
/* run this program using the console pauser or add your own getch, system("pause") or input loop */
// 숫자만 추출 : 
// 문자와 숫자가 섞인 문자열에서 숫자를 추출하고, 그 약수 갯수도 추출하라
 
 
int main(int argc, char** argv) {
	char a[100]; //최대 길이 100자리
	int result = 0, cnt = 0, i;
	
	//문자열 받기 
	scanf("%s", &a);
	
	//a[i] != '\0' 의 의미: 문자열의 끝을 알리는 문자 = \0 
	for(i =0; a[i] != '\0';i++){
		//a에 들어있는 수가 숫자라면, 
		if(a[i] >= 48 && a[i] <= 57){ //아스키 코드로 0부터 9까지의 숫자 문자 
			result = result * 10 + (a[i]-48); 
			//예를 들어 문자열이 0,2,8, 이라면 0 -> 2 -> 28 순으로 만들어짐  
		}
		
	} 
	printf("%d\n", result);
	for(i=1; i<=result; i++){
		if(result%i ==0) cnt++;
	}
	printf("%d\n",cnt);
	
	
	return 0;
}
