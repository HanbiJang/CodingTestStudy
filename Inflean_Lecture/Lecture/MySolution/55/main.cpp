#include <iostream>
#include <stack>
#include <queue>

using namespace std;
int main() {
	int N;
	queue<int> arr;
	stack<int> P;
	queue<char> ans;
	
	//input 
	scanf("%d", &N);	
	for(int i=0; i<N; i++){
		int tmp;
		scanf("%d",&tmp);
		arr.push(tmp);
	}
	
	int cnt = 1; // ù��ȣ 
	
	//�ùٸ� ������ ���ö����� stack�� ����
	//�Ұ����ϸ� impossible ����ϱ� 
	//printf("P");
	ans.push('P');
	P.push(arr.front());
	arr.pop();
	while(cnt<=N){
		
		if(P.top() == cnt){
			//printf("O");
			ans.push('O');
			P.pop();
			cnt++;
		}
		else{
			if(arr.empty()){
				printf("impossible");
				exit(0);
			}
			//printf("P");
			ans.push('P');
			P.push(arr.front());
			arr.pop();
		}
				
	}
	while(!ans.empty()){
		printf("%c",ans.front());
		ans.pop();
	} 	

	return 0;
}

