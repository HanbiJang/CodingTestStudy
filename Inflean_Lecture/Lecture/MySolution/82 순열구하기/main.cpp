#include <iostream>
#include <vector>

using namespace std;

int N,R;
vector<int> arr(17);
vector<int> res(17);
int ch[17]; 
int ans; //���� 

void re(int r){
	
	if(r>R){
		//***�� ������ ��� R�� ������ ���� ����� 
//		int cnt = 0;
//		for(int i=1; i<=N; i++){
//			if(ch[i]==1){
//				cnt++;
//			}
//		}
		
//		if(cnt==R){
//			ans++;
//			for(int i=1; i<=R; i++){
//				printf("%d ",res[i]);	
//			}	
//			printf("\n");
//		}

		ans++;
		for(int i=1; i<=R; i++){
			printf("%d ",res[i]);	
		}	
		printf("\n");
		
		return;
	}
	else{
		
		for(int i=1; i<=N; i++){
			if(ch[i]==0){ //��� �� ������ ����� 
				ch[i]=1;
				res[r]=arr[i];
				re(r+1); //��� 
				
				//res[r]=0;
				ch[i]=0; //�ʱ�ȭ 
			}
		}

	}
	
} 

int main() {	
	//input
	scanf("%d %d",&N, &R);
	for(int i=1; i<=N; i++){	
		scanf("%d", &arr[i]);
	}
	
	//dfs
	re(1);
	printf("%d",ans); 
	
	return 0;
}
