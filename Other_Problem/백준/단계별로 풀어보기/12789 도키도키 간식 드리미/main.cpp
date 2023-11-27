#include <iostream>
#include <stack> 
#include <queue>

using namespace std;

int main(){

	//��ȯ�� �տ� ���ִ� �л��� �� N
	int N;
	bool res = false;
	stack<int> st;
	queue<int> q;
	
	scanf("%d", &N); 
	
	for(int i=0; i<N; i++){
		//��� �л����� ��ȣǥ
		int a;
		scanf("%d", &a);
		
		q.push(a);
	}
	
	//��ΰ� ������ ���� �� �ִ��� �Ǻ�
	int idx = 1;
	for(int i=0; i<N; i++){
		if(!q.empty()) st.push(q.front());
		
		while(!st.empty() && st.top()==idx){
			idx++;			
			st.pop();	
		}

		if(!q.empty()) q.pop();
	}
	
	//stack�� pop�� �ؼ� �Ǵ��� Ȯ�� 
	while(!st.empty()){
		if(st.top()==idx){
			idx++;
			st.pop();
		}
		else{
			break;
		}								
	}	
	
	if(idx==N+1) res=true;
	else res=false;
	
	res?printf("Nice"):printf("Sad");
	
	return 0;
}

