#include <iostream>
#include <vector>

//���Ͽ�,���ε�

int arr[1001]; 

using namespace std;

int F(int n){

	if(arr[n]==n){
		return n;	
	}
	else{
		return arr[n] = F(arr[n]); //��ξ���!! 
	}	
	
}

void U(int a, int b){
	
	a = F(a);
	b = F(b);
	
	if(a<b){
		arr[a] = b;
	}
	else{
		arr[b] = a;
	}
	
}


int N, M;
int main() {	
	
	//input
	scanf("%d %d", &N, &M);
	
	//�ʱ�ȭ  
	for(int i=1; i<=N;i++){
		arr[i] = i;
	}
	
	for(int i=1; i<=M; i++){
		int a,b;
		scanf("%d %d",&a, &b);

		if(a!=b) U(a,b);		
	}
	
	for(int i=1; i<=N;i++){
		printf("%d",arr[i]);
	}
	//���� �������� Ȯ�� 
	int a,b;
	scanf("%d %d", &a, &b);
	a = F(a);
	b = F(b);
	if(a==b) printf("YES");
	else printf("NO");
	
	return 0;
}

