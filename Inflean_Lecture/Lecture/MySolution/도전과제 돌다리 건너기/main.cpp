#include <iostream>
#include <vector>

using namespace std;

int f[50];
int N;
int re(int n){
	
	//���� ���� 
	if(n<3) return n;
	
	//���� �ִ� ��� 
	if(f[n]!=0) return f[n];
	else{
		return f[n]=re(n-1)+re(n-2);		
	}
}

int main() {
	scanf("%d",&N);
	
	//���, �޸������̼� 
	re(N+1);
	
	printf("%d",f[N+1]);
	
	return 0;
}
