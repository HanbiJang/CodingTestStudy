#include <iostream>
#include <stack>

using namespace std;

int main(){

	//������ �����ϴ� ������ �����϶�.
	//cin, endl ���� �ð��ʰ� 
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
				
				//���� x�� ���ÿ� �ִ´�.
				st.push(b);
				 
				break;
			case 2:
				
				//���ÿ� ������ �ִٸ� ������ ������ ���� ����Ѵ�.
				//���ٸ� -1�� ��� �����.
				if(st.empty()){
					printf("-1\n");
				}	
				
				 
				else{
					printf("%d\n",st.top());
					st.pop();	
				}
				
				break;
			case 3:
				
				//���ÿ� ����ִ� ������ ������ ���
				printf("%d\n",st.size());
				break;
			case 4:
				
				//������ ��������� 1, �ƴϸ� 0�� ���
				if(st.empty()){
					printf("1\n");
				}
				else{
					printf("0\n");
				} 
				
				break;
			case 5:
				
				//���ÿ� ������ �ִٸ� ������ ������ ���
				if(!st.empty()) 
					printf("%d\n",st.top());
				//���ٸ� -1�� ��� ���
				else printf("-1\n");
				
				break;														
		
		}	
		
		
	}
			
	return 0;
}

