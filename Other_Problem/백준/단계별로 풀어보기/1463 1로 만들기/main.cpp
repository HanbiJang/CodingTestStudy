#include <iostream>
#include <vector>

using namespace std;

int main(){

	//1�� ��������! 
	//������ ����ϴ� Ƚ���� �ּڰ� ���϶�
	int N;
	cin>>N;
	
	//== 1���� �����Ͽ� N�� ����� ���� ���� ����� ã�� ��
	vector<int> dp(N+1, N);
	
	dp[1]=0;
	for(int i=2; i<=N; i++){
		if(i%3==0){ //x�� 3���� ������ �������� 3���� ����
			dp[i] = min(dp[i], dp[i/3]+1);
		} 
		if(i%2==0){ //x�� 2�� �������� 2�� ����
			dp[i] = min(dp[i], dp[i/2]+1);
		}
		dp[i] = min(dp[i], dp[i-1]+1); //1�� ��
	}
	
	cout<<dp[N];
	
	return 0;
}

