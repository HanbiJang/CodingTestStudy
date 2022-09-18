#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int ans[501];
int main() {
	int N,m; //동전개수, 거슬러줄 돈 
	
	//input 
	scanf("%d", &N);
	int arr[13];
	for(int i=0; i<N; i++){ //동전 갯수 
		scanf("%d", &arr[i]); 
	}
	scanf("%d",&m);
	
	
	//냅색
	for(int i=0; i<N; i++){ //동전 종류 
		for(int j=0; j<=m; j++){ //거슬러줄 돈까지 
			if(j<arr[i] || j==0 ) continue;
		
			int mm = ans[j-arr[i]]+1;
			if(ans[j]==0){
				ans[j]=mm;
			}
			else{
				//갱신
				ans[j]=min(mm, ans[j]); 
			}
		}
		
	}
	
	//output 
	printf("%d", ans[m]);
	
	return 0;
}
