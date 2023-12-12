#include <iostream>
#include <cmath>
#include <string>
 
using namespace std;

void func(int start, int end){
	if(start == end) { //길이가 1 
		printf("-");
		return;
	}
	else{
		//3등분하기...
		int leng = (end-start+1)/3;

		func(start,start+leng-1);
		//func(start+leng,start+leng+leng-1);
		for(int i=0; i<leng; i++){
			printf(" ");
		}
		func(end-leng+1,end);
	}
}


int main(){
	
	//모든 선의 길이가 1일때까지 문자열을 3등분하라 
	//문자열 : -가 3^n개 
	

	//입력 : 파일의 끝에서 입력을 멈춘다??
	//https://velog.io/@sw801733/C-EOF-%EC%B2%98%EB%A6%AC%ED%95%98%EA%B8%B0-%EA%B3%84%EC%86%8D%EB%90%98%EB%8A%94-%ED%85%8C%EC%8A%A4%ED%8A%B8-%EC%BC%80%EC%9D%B4%EC%8A%A4
	int N;
	while(scanf("%d",&N)!=-1)
	{		
		func(1,pow(3,N));
		printf("\n");
	}

	return 0;
}

