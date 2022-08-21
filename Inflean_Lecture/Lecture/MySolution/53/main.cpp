#include <iostream>
#include <stack>

using namespace std;
int main() {
	// 16진법: ... 10,11,12,13,14,15 = ... A,B,C,D,E,F 
	int N,K; // 10진법 수, 변환 진법 (2,5,8,16) 
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
					
		if(ans.top()>=10){ // 문자 
			d = 'A' + (ans.top()-10); // 숫자 -> A부터 시작하는 문자 
		} 
		else {
			d = (ans.top() + '0'); // 숫자->문자		
		}
		printf("%c",d);
		ans.pop();
		
	}
		

	return 0;
}

