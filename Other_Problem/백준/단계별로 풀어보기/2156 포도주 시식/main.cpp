/*
���� �� �ý�ȸ
������ ���� �Ϸķ� ��������
���� �� ������ ����
���� ��ġ�� �ٽ� ����
�������� ���� 3�� ���� �Ұ�
1~n���� ������ �� & �������� �� �־���
���� �� �ִ� �ִ��� ���� ���϶� 
*/ 

#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;
int main(){
	
	int n; //num of wine
	cin>>n;
	
	vector<int> dp(n+1,0);
	vector<int> wine(n+1,0);
	for(int i=1; i<=n; i++){
		int val;
		cin>>val;
		
		wine[i]=val;
	}
	
	//<������>
	//[1] i��° ������ �������� �ʴ� ���
	//[2] i��° ������ �����ϰ�, ���� ������ �������� �ʴ� ���
	//[3] i��°�� i-1��° ������ �����ϰ�, �� ���� ������ �������� �ʴ� ���
	
	dp[1] = wine[1];
	dp[2] = wine[1]+wine[2];
	
	for(int i=3; i<=n; i++){
		int a,b,c;
		
		//[1] : i��° ������ �������� �ʴ� ���
		a = dp[i-1]; 
		//[2] : i��° ������ �����ϰ�, ���� ������ �������� �ʴ� ���
		b = wine[i] + dp[i-2];
		//[3] : i��°�� i-1��° ������ �����ϰ�, �� ���� ������ �������� �ʴ� ���
		c = wine[i] + wine[i-1] + dp[i-3];
		
		dp[i] = max(max(a,b),c);
	}
	
	cout<<*max_element(dp.begin(), dp.end());
	
	return 0;
}

