#include <iostream>


//영어 단어 복구 
// 문자열의 공백을 제거하고, 소문자로 변경시켜 출력하라
	//bE    au   T   I fu   L => beautiful 로 바꿔서 출력! 
 
/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char** argv) {
	char a[101], b[101];
	int i, pos=0;
	
	//* 중요 함수 ! *
	gets(a); //공백, 스페이스 상관없이 한줄 읽어버림 
	
	for(i =0; a[i] != '\0'; i++){
		if(a[i] != ' '){ //[1] 공백이 아닐 때 
			if(a[i] >= 65 && a[i] <= 90){
				b[pos++] = a[i] + 32;
				//아스키코드 상 대문자에서 소문자로 변하기 +32를 하면 소문자로 변함 
			} 
			else b[pos++] = a[i]; 
		}
	} 
	b[pos] = '\0';
	printf("%s\n",b);
	
	return 0;
}
