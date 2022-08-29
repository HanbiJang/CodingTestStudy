#include <iostream>
#include <vector>
#include <queue>

using namespace std;


int main() {	
	
	int in;
	priority_queue<int> pQ; // 최대힙 
	
	while(1){
		
		scanf("%d", &in);
		if(in==-1){
			exit(0);
		}
		else if(in==0){
			
			//최대힙에서 최댓값을 꺼내어 출력
			if(pQ.empty()) printf("-1\n");
			else{
				printf("%d\n", pQ.top());
				pQ.pop();
			}
			 
		}
		else if ( in>0 ){ //자연수 입력 
			
			//최대힙에 입력
			pQ.push(in);
		} 
		
	}	
	
	return 0;
}

