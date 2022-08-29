#include <iostream>
#include <vector>
#include <queue>

using namespace std;

//�ִ������� �ּҰ��� ���ϱ� -> 
// ���� ���ϱ� 
//�ڿ����� �ԷµǾ�� �� �� �ִ� ����� 
int main() {	
	
	int in;
	priority_queue<int> pQ; //�ִ� 
	
	while(1){
		
		scanf("%d", &in);
		if(in==-1){
			exit(0);
		}
		else if(in==0){
			
			//�ּҰ��� ������ ���
			if(pQ.empty()) printf("-1\n");
			else{
				printf("%d\n", -pQ.top());
				pQ.pop();
			}
			 
		}
		else if ( in>0 ){ //�ڿ��� �Է� 
			
			//�ּ� ���� �Է�
			pQ.push(-in);
		} 
		
	}	
	
	return 0;
}

