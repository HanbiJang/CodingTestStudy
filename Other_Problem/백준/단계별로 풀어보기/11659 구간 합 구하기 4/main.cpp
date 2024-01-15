#include <iostream>
#include <vector>

using namespace std;

int main(){
	
	//�� N���� �־����� ��, i��° �� ���� j��° ������ ���� ���϶�
	int N,M; 
	scanf("%d %d",&N,&M);
	
	vector<int> dp(N+1, 0);
	
	for(int i=1; i<=N; i++){
		int a;
		scanf("%d",&a);
		
		dp[i] = a;
		
		//������ ����� 
		dp[i] = dp[i-1] + dp[i];
	}
	cout<<endl;
	
	for(int i=0; i<M; i++){
		int a,b;
		scanf("%d %d",&a, &b);
		
		int sum = dp[b] - dp[a-1];
		printf("%d\n",sum);
	}
	
			
	return 0;
}

