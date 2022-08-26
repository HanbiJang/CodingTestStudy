#include <iostream>

using namespace std;

int N,M;
int arr[12];
int cnt[12];
int ans = 0;
void  re(int i){
	
	if(i>N){
		int sum = 0;
		for(int j=1; j<=N; j++){
			sum += arr[j] * cnt[j];
		}
		if(sum == M) {
			ans++;
		}

		return;
	}
	
	else{
		
		cnt[i] = 1;
		re(i+1);		

		cnt[i] = 0;
		re(i+1);
		
		cnt[i] = -1;
		re(i+1);
	}	
	
} 

int main() {
	
	scanf("%d %d", &N, &M);
	
	for(int i=1; i<=N; i++){
		scanf("%d", &arr[i]);
	}
	
	re(1);
	if(ans!=0)
		printf("%d",ans);
	if(ans==0)
		printf("-1");
		
	return 0;
}

