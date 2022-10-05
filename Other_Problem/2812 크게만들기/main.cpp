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
	int cnt=0; //���� Ƚ�� 
	
	for(int i=1; num[i]!='\0'; i++){
		int n=num[i]-'0';

		//top�� ��������� �� ŭ 
		//if(!st.empty() && st.top()>n && cnt<K){ cnt++; continue;}
		
		//top�� ��������� �� ���� 	
		while(!st.empty() && st.top()<n && cnt<K){
			st.pop(); //���� ������ ������ ���ÿ��� ��� pop 
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

