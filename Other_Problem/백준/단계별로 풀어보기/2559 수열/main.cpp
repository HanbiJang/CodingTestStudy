#include <iostream>
#include <vector>

using namespace std;

/* ������ */
int main(){
	
	//�������� ��ĥ������ �µ��� ���� ���� ū ���� ���϶� 
	
	int n,k; //n: �µ� ������ ��¥�� ��, k ���ؾ��ϴ� ������ ��¥
	cin>>n>>k;
	
	vector<int> tem;
	for(int i=0; i<n; i++){
		int a;
		cin>>a;
		
		tem.push_back(a);
	}
	
	//�������� ��ĥ ������ ���� ���� ū ���� ����϶� 
	//k��ŭ�� ���� ����
	long long maxSum = -2147000000;
	long long sum=0;
	for(int i=0; i<k; i++){
		sum += tem[i];
	}
	
	maxSum = sum;
	
	for(int i=k; i<n; i++){
		long long tmpSum = sum + tem[i] - tem[i-k];
		sum = tmpSum;
		//cout<<sum<<"+"<<tem[i]<<"-"<<tem[i-k]<<" = "<<tmpSum<<endl;
		if(maxSum < tmpSum) maxSum = tmpSum;
	}
	cout<<maxSum;
	
	return 0;
}

