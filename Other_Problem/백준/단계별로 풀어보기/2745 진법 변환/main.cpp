#include <iostream>
#include <string>
#include <stack>

using namespace std;

//B진법 수 N을 10진법으로 출력하기 
int main(){
	
	ios_base::sync_with_stdio(false);

	int B;
	int N;
	cin>>N>>B; //10진법수 N, 진법 B 
	
	int ans=0;
	stack<int> st;
	
	//진법 변환
	for(int i=N; i>0; i/=B){
		st.push(i%B);
	} 
	
	while(!st.empty()){
		int newOne = st.top();
		st.pop();
		if(newOne>=10){
			cout<<(char)(newOne-10+'A');
		}
		else{
			cout<<newOne;
		}
		
	}
	
	
	
	return 0;
}

