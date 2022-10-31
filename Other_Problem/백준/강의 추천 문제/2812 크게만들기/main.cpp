#include <iostream>
#include <vector>
#include <string>
#include <stack>

using namespace std;

int main(){
	//input
	int N,K;
	scanf("%d %d", &N, &K);
	
	string num;
	cin>>num;
	
	stack<int> st;
	st.push(num[0]-'0');
	//======
	int cnt=0; //삭제 횟수 
	
	for(int i=1; num[i]!='\0'; i++){
		int n=num[i]-'0';

		//top이 현재수보다 더 큼 
		//if(!st.empty() && st.top()>n && cnt<K){ cnt++; continue;}
		
		//top이 현재수보다 더 작음 	
		while(!st.empty() && st.top()<n && cnt<K){
			st.pop(); //현재 수보다 작으면 스택에서 계속 pop 
			cnt++;
		}		
		st.push(n); 
	}
	
	while(cnt<K){
		st.pop();
		cnt++;
	}
	
	//output
	stack<int> res;
	while(!st.empty()){
		res.push(st.top());
		st.pop();
	}
	while(!res.empty()){
		cout<<res.top();
		res.pop();
	}

	return 0;
}

