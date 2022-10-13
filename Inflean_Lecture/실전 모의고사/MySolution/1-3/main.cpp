#include <iostream>
#include <vector>
#include <stack>

using namespace std;

int main() {
	
	int N;
	int arr[100001];
	
	//input
	scanf("%d",&N);	
	for(int i=1; i<=N; i++){
		cin>>arr[i];
	}
	
	//�����л� ã�� 
	stack<int> s; //��ȣ�� ����
	 
	arr[0]=0; //������ ����
	s.push(0); 
	 
	for(int i=1; i<=N; i++){
		//���� �ֵ� ���� 
		while(!s.empty() && arr[s.top()]<=arr[i]){
			s.pop();
		}
		if(!s.empty()) cout<<s.top()<<" "; //�����л� (��ȣ) ��� 
		else cout<<"0 ";
		s.push(i);	
	}
	
	
	
	return 0;
}

