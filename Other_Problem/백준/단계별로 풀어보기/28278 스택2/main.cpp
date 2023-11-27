#include <iostream>
#include <stack>

using namespace std;

int main(){

	//정수를 저장하는 스택을 구현하라.
	//cin, endl 쓰면 시간초과 
	int N;
	cin>>N;
	
	stack<int> st;
	
	for(int i=0; i<N; i++){
		int a;
		int b;
		
		scanf("%d",&a);
		switch(a){
			case 1:
				scanf("%d",&b);
				
				//정수 x를 스택에 넣는다.
				st.push(b);
				 
				break;
			case 2:
				
				//스택에 정수가 있다면 맨위의 정수를 빼고 출력한다.
				//없다면 -1을 대신 출력함.
				if(st.empty()){
					printf("-1\n");
				}	
				
				 
				else{
					printf("%d\n",st.top());
					st.pop();	
				}
				
				break;
			case 3:
				
				//스택에 들어있는 정수의 개수를 출력
				printf("%d\n",st.size());
				break;
			case 4:
				
				//스택이 비어있으면 1, 아니면 0을 출력
				if(st.empty()){
					printf("1\n");
				}
				else{
					printf("0\n");
				} 
				
				break;
			case 5:
				
				//스택에 정수가 있다면 맨위의 정수를 출력
				if(!st.empty()) 
					printf("%d\n",st.top());
				//없다면 -1을 대신 출력
				else printf("-1\n");
				
				break;														
		
		}	
		
		
	}
			
	return 0;
}

