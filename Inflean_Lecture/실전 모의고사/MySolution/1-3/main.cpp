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
	
	//방해학생 찾기 
	stack<int> s; //번호를 넣음
	 
	arr[0]=0; //무조건 작음
	s.push(0); 
	 
	for(int i=1; i<=N; i++){
		//작은 애들 삭제 
		while(!s.empty() && arr[s.top()]<=arr[i]){
			s.pop();
		}
		if(!s.empty()) cout<<s.top()<<" "; //방해학생 (번호) 출력 
		else cout<<"0 ";
		s.push(i);	
	}
	
	
	
	return 0;
}

