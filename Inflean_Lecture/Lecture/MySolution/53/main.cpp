#include <iostream>
#include <stack>

using namespace std;
int main() {
	// 16����: ... 10,11,12,13,14,15 = ... A,B,C,D,E,F 
	int N,K; // 10���� ��, ��ȯ ���� (2,5,8,16) 
	stack<int> ans;
	
	
	scanf("%d %d", &N, &K);
	
	int tmp = N;
	for(int i=0;;){
		if( tmp == 0 ) break;
		
		ans.push(tmp%K);
		tmp /= K;		
	}
	char d;
	for(int i=0; !ans.empty(); i++){
					
		if(ans.top()>=10){ // ���� 
			d = 'A' + (ans.top()-10); // ���� -> A���� �����ϴ� ���� 
		} 
		else {
			d = (ans.top() + '0'); // ����->����		
		}
		printf("%c",d);
		ans.pop();
		
	}
		

	return 0;
}

