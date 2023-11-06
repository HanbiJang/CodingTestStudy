#include <iostream>
#include <cmath> 
using namespace std;

int main(){
	
	//열려있는 창문의 개수를 구하라
	//처음에는 모든 창문이 닫혀있음
	
	int N; //창문, 사람의 개수	
	cin>>N; //N(1 ≤ N ≤ 2,100,000,000)
	
	int res = 0;
	
	/* 
	//약수 개수 짝수 -> 닫힘 
	//약수 개수 홀수 -> 열림 
	
	<<시간초과 코드>>
	for(int i=1; i<=N; ++i){
		int ys=0;
		for(int j=1; j<=i; ++j){ //약수 개수 판단 
			if(i%j==0){
				++ys;
			}		
		}
				
		if(ys%2==1){ //홀수 
			res++; //열림 
		}
	}
	*/
	
	
	//제곱수는 약수가 홀수개이다...!
	//1~N 범위 안에서 제곱수의 개수=답
	
	for(int i=1; i<=N; ++i){
		if(i*i<=N){
			res++;
		}
		else{
			break;
		}
	}
	
	
 	cout<<res;

	return 0;
}

