#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int arr[101];
vector<int> ans(101); //�ε������� �ش� ���� �̾����� ������  �ε����� �߶��� ���� �ִ�� ���� �� �ִ�  �� ���� 

int main() {
	
	//input 
	int N;
	scanf("%d", &N); 
	for(int i=1; i<=N; i++){
		scanf("%d",&arr[i]);
	}
	
	//�ִ뼱 ã��
	ans[1]=1;
	for(int i=2; i<=N; i++){
		//���� �ε������� �ִ밪 ã�� 
		int max_ = 0;
		for(int j=1; j<=i-1; j++){		
			if( arr[i]>arr[j] && max_<ans[j]){
				max_=ans[j];
			}
		}
		ans[i]=max_+1;
		
	} 

	//output
	//for(int i=1; i<=N; i++) printf("ans: %d \n", ans[i]);
	printf("%d", *max_element(ans.begin(), ans.end()));	

	return 0;
}
