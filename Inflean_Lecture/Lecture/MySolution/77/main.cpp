#include <iostream>
#include <vector>

//유니온,파인드

int arr[1001]; 

using namespace std;

int F(int n){

	if(arr[n]==n){
		return n;	
	}
	else{
		return arr[n] = F(arr[n]); //경로압축!! 
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
	
	//초기화  
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
	//같은 집합인지 확인 
	int a,b;
	scanf("%d %d", &a, &b);
	a = F(a);
	b = F(b);
	if(a==b) printf("YES");
	else printf("NO");
	
	return 0;
}

