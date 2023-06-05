#include <iostream>
#include <string>
using namespace std;

//1부터 n중에서 중복 없이 M개를 뽑기 
int visited[9];
int arr[9];
int n,m;

void re(int cnt){
	
	if(cnt>m){
		
		for(int i=1; i<=m; i++){
			printf("%d ", arr[i]);
		}
		printf("\n");
		return;
	}
	
	for(int i=1; i<=n; i++){
		if(visited[i]==0){
			visited[i]=1;
			arr[cnt]=i; //순서 저장 
			re(cnt+1);
			visited[i]=0;
		}					
		
	}	
	
		
}

int main(){
	
	ios_base::sync_with_stdio(false);
	
	
	cin>>n>>m;
		
	re(1);
	 
		
	return 0;
}

