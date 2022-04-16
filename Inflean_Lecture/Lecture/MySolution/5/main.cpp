//#include <iostream>
#include <stdio.h>
//주민 등록 번호로 나이를 계산해서 출력하라 
//뒷자리 첫자 2,4 여자 1,3 남자  
/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char** argv) {
	//scanf 와  printf가 대용량 입출력에 빠르다 (cin cout보다)
	char a[20];
	int age, year;
	
	scanf("%s",&a); //주민 번호가 문자열 형태로 받아진다
	
	//[1] 나이 계산하기 
	//1)19xx년생 일때 2)20xx년생 일때  
	//** 아스키코드 48 = '0' ** 
	if(a[7]=='1' || a[7]=='2') year = 1900 + (a[0]-48)*10 + (a[1]-48);
	else year =  2000 + (a[0]-48)*10 + (a[1]-48);
	
	age = 2019 -year+1; //연도 기준 2019
	
	printf ("%d", age);
	
	//[2] 성별 구분하기 
	if(a[7]=='1'|| a[7] == '3') printf("M\n");
	else printf("W\n");
	
	
	return 0;
}
