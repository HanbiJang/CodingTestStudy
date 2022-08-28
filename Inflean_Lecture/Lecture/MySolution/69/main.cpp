#include <iostream>
#include <vector>

using namespace std;

//BFS ����Ʈ�� ���� �켱 Ž�� 
int ch[8];
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
	vector<int> queue;
		
	queue.push_back(1);	// ���� ��� �־��ֱ� 
	while( queue.size() != 0 ){
		int cur = queue[0];
		if(ch[cur]==0){ //A�� �湮 �� ������ 
		
			//[1] �� ���� ����� ������ ť�� ����ֱ�  
			for(int i=0; i< arr[cur].size(); i++){
				queue.push_back(arr[ cur ][i]);
			}
			
			//[2] A �湮 & ť���� ���� 
			ch[cur]=1;
			printf("%d ",cur);		
			queue.erase(queue.begin()); 
		} 
	}	 
	
	return 0;
}

