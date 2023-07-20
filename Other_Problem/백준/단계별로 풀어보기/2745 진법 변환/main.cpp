#include <iostream>
#include <string>
#include <stack>

using namespace std;

//B���� �� N�� 10�������� ����ϱ� 
int main(){
	
	ios_base::sync_with_stdio(false);

	int B;
	int N;
	cin>>N>>B; //10������ N, ���� B 
	
	int ans=0;
	stack<int> st;
	
	//���� ��ȯ
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

