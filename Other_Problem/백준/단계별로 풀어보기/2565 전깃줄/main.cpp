#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main(){
	
	int cnt=0;
	//�������� ���� 
	int n;
	cin>>n;
	
	vector<pair<int,int> > info; 
	//���� ����
	for(int i=0; i<n; i++){
		int a,b;
		cin>>a>>b; //500���� ��� 
		
		info.push_back(make_pair(a,b));
	}
	
	vector<int> dp(n,1); 
	
	//�ִ� ���� ���� ã�� -> (�� ���ֵ� �� ������ �� a ����)
	//�°� ����� ������ ����������! 
	//��ü ���⼱ �� - a : �� 
	//����
	sort(info.begin(), info.end());
	int a=0;
	
	for(int i=0; i<n; i++){
		for(int j=0; j<i; j++){
			if(info[i].second>info[j].second){
				dp[i] = dp[i]>dp[j]+1 ? dp[i]: dp[j]+1;
			}
		}
	}
	
	a = *max_element(dp.begin(), dp.end());
	
	cnt = n - a;
	cout<<cnt;
	
	return 0;
}

