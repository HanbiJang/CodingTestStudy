#include <iostream>
#include <vector>

using namespace std;

//BFS ����Ʈ�� ���� �켱 Ž�� 
int ch[8];
int front=-1, back= 0; 
int Q[100];

int main() {	
	
	// 1~7���� �ִ� ����Ʈ���� ���� �켱 Ž���ϸ�
	// 1->2->3->4->5->6->7
	
	//Ʈ�� ����� 
	vector<int> arr[8];

	for(int i=1; i<=6/*������*/; i++){
		int a,b;
		scanf("%d %d", &a, &b);
		
		arr[a].push_back(b);
	}
	
	//BFS
	
	//ť : ���� ��忡 ����� ����ȣ�� ť�� �ֱ� 
		
	Q[back] = 1;	// ���� ��� �־��ֱ� 
	while( front < back ){
		int cur = Q[++front]; // ť ������ ���ÿ� 
		if(ch[cur]==0){ //A�� �湮 �� ������ 
		
			//[1] �� ���� ����� ������ ť�� ����ֱ�  
			for(int i=0; i< arr[cur].size(); i++){
				if(ch[arr[cur][i]]==0)
					Q[++back] = arr[cur][i];
			}
			
			//[2] A �湮 & ť���� ���� 
			ch[cur]=1;
			printf("%d ",cur);
			//front++;		
		} 
	}	 
	
	return 0;
}

