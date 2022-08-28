#include <iostream>
#include <vector>
#include <queue>

using namespace std;

int S,E; //����, �۾��� 
int jump[3] = {1,-1,5}; //���� ��� 

int ch[10001]; // ������ �� ������ ǥ�� 


// BFS  
int main() {	
	
	scanf("%d %d", &S, &E);
	
	//BFS	
	queue<int> Q;
	Q.push(S);
	
	while(!Q.empty()){
			
		//���� ����(=������) ����ֱ� 
		for(int i=0; i<3; i++){
			int cur = Q.front();
			int pos = cur+jump[i];
			
			if(ch[pos]==0){
				Q.push(pos);
				ch[pos] += ch[cur]+1;
				
				if(pos==E){
					printf("%d",ch[pos]);
					exit(0);
				}
			}			
		}
		Q.pop();			
	}
	
	return 0;
}

