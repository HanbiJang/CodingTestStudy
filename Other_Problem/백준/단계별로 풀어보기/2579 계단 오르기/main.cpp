#include <iostream>
#include <vector>
using namespace std;


int main(){
	
	
	vector<int> floor;
	//����� �ѹ��� 1,2 ��ܾ� ���� �� ����
	//(1,1)�̷������� ������ �� �� 
	//������ ���� ����� ��ƾ���
	
	//����� ����
	int n;
	cin>>n;
	
	//���� �Ʒ��� ���� ��ܺ����� ����
	for(int i=0; i<n; i++){
		int score;
		cin>>score;
		
		floor.push_back(score);
	}
	
	vector<pair<int,int> > dp(n+1,make_pair(0,0)); //dp[].first�� 2ĭ ����,  dp[].second�� 1ĭ ����
	//�� ��ܿ� �ö������� ���� �ִ밪 
	//ù��° ĭ
	dp[1] = make_pair(0,floor[0]); 
	dp[2] = make_pair(floor[1], floor[0]+floor[1]);
	for(int i=3; i<=n; i++){
		//2ĭ
		dp[i].first = max(dp[i-2].first, dp[i-2].second)+floor[i-1];
		//1ĭ
		 
		//������ 1ĭ1ĭ ���� 
		dp[i].second = dp[i-1].first + floor[i-1];	
		
	}
	
	cout<<max(dp[n].second,dp[n].first);

	return 0;
}

