#include <iostream>

using namespace std;

//1���� n�߿��� m���� �̴µ� �ߺ� ���� + �������� 
int visited[9];
int n,m;

bool isRight(){
	
	for(int i=8; i>=0; i--){
		if(visited[i]!=0){
			
			break;
		}
	}
	
}

void re(int start, int cnt){
	
	if(cnt>=m){
		
		for(int i=0; i<9; i++){
			if(visited[i]>0){
				for(int j=0; j<visited[i]; j++){
					cout<<i<<" ";
				}				
			}			
		}
		cout<<endl;
		return;
	}
	
	for(int i=start; i<=n; i++){
		visited[i]++;
		re(i, cnt+1);
		visited[i]--;
	}	
	
		
}

int main(){
	
	ios_base::sync_with_stdio(false);
	
	
	cin>>n>>m;
		
	re(1,0);
	 
		
	return 0;
}

