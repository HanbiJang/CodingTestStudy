#include <iostream>
#include <vector>

using namespace std;

int arr[22][22];
int N,M;

int ch[22];
int cost=2147000000,sum=0;

void re(int n){
	
	if(n==N){
		if(cost>sum) cost = sum;
		return;
	}
	else{
		for(int i=1; i<=N; i++){
			if(ch[i]==0 && arr[n][i]!=0){
				ch[i] = 1;
				sum+=arr[n][i];
				re(i);
				ch[i] = 0;
				sum-=arr[n][i];	
			}		
		}				
	}
	
}

int main() {	
	
	scanf("%d %d", &N, &M);
	for(int i=1; i<=M; i++){
		int a,b,cos;
		scanf("%d %d %d",&a,&b,&cos);
		arr[a][b] = cos;
	}
	
	ch[1]=1;
	re(1);
	printf("%d",cost);
	

	return 0;
}

