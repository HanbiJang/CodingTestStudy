#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int ans[501];
int main() {
	int N,m; //��������, �Ž����� �� 
	
	//input 
	scanf("%d", &N);
	int arr[13];
	for(int i=0; i<N; i++){ //���� ���� 
		scanf("%d", &arr[i]); 
	}
	scanf("%d",&m);
	
	
	//����
	for(int i=0; i<N; i++){ //���� ���� 
		for(int j=0; j<=m; j++){ //�Ž����� ������ 
			if(j<arr[i] || j==0 ) continue;
		
			int mm = ans[j-arr[i]]+1;
			if(ans[j]==0){
				ans[j]=mm;
			}
			else{
				//����
				ans[j]=min(mm, ans[j]); 
			}
		}
		
	}
	
	//output 
	printf("%d", ans[m]);
	
	return 0;
}
