#include <iostream>
#include <vector>

using namespace std;

int f[50];
int N;
int re(int n){
	
	//종료 조건 
	if(n<3) return n;
	
	//값이 있는 경우 
	if(f[n]!=0) return f[n];
	else{
		return f[n]=re(n-1)+re(n-2);		
	}
}

int main() {
	scanf("%d",&N);
	
	//재귀, 메모이제이션 
	re(N+1);
	
	printf("%d",f[N+1]);
	
	return 0;
}
