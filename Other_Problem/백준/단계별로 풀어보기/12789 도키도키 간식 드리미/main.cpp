#include <iostream>
#include <stack> 
#include <queue>

using namespace std;

int main(){

	//승환이 앞에 서있는 학생의 수 N
	int N;
	bool res = false;
	stack<int> st;
	queue<int> q;
	
	scanf("%d", &N); 
	
	for(int i=0; i<N; i++){
		//모든 학생들의 번호표
		int a;
		scanf("%d", &a);
		
		q.push(a);
	}
	
	//모두가 간식을 받을 수 있는지 판별
	int idx = 1;
	for(int i=0; i<N; i++){
		if(!q.empty()) st.push(q.front());
		
		while(!st.empty() && st.top()==idx){
			idx++;			
			st.pop();	
		}

		if(!q.empty()) q.pop();
	}
	
	//stack을 pop만 해서 되는지 확인 
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

