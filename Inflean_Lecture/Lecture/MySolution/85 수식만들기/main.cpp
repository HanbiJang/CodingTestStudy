#include <iostream>
#include <vector>

using namespace std;

int sum;
int max_ = -2147000000;
int min_ = 2147000000;

int N;
int arr[11];
int oper[4]; //+ - * / 순으로 갯수가 적혀진 배열 

void re(int n){
	if(n==N){
		//애초에 연산자를 n-1개 다 쓴 것이라 다 썼는지 확인 필요 X 
		if(max_<sum) max_=sum;
		if(min_>sum) min_=sum;
		
		return;
	}
	
	else{

		for(int i=0; i<4; i++){ //연산자 4개 반복				
			if(oper[i]>0){ //연산자 있는 경우 
				int oldSum = sum;
				oper[i]--;
				//계산 
				switch(i){
					case 0: //+
						sum+=arr[n];
						break;
					case 1: //-
						sum-=arr[n];
						break;
					case 2: //*
						sum*=arr[n];
						break;
					case 3: // /
						sum/=arr[n];
						break;
				}
				//재귀 
				re(n+1);
				
				//취소
				oper[i]++;
				sum = oldSum; 
			}						 
		}			
		
	}
}


int main() {
	
	//input
	scanf("%d", &N);
	for(int i=0; i<N;i++){
		scanf("%d", &arr[i]);
	}
	for(int i=0; i<4; i++){
		scanf("%d",&oper[i]);
	}	
	 
	sum+=arr[0]; //처음 시작 
	ch[0] = 1; //방문
	re(1);
	
	printf("%d\n%d", max_,min_);
	
	return 0;
}
