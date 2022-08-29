#include <iostream>
#include <vector>
#include <queue>

using namespace std;

//최대힙에서 최소값을 구하기 -> 
// 음수 곱하기 
//자연수가 입력되어야 할 수 있는 방법임 
int main() {	
	
	int in;
	priority_queue<int> pQ; //최대 
	
	while(1){
		
		scanf("%d", &in);
		if(in==-1){
			exit(0);
		}
		else if(in==0){
			
			//최소값을 꺼내어 출력
			if(pQ.empty()) printf("-1\n");
			else{
				printf("%d\n", -pQ.top());
				pQ.pop();
			}
			 
		}
		else if ( in>0 ){ //자연수 입력 
			
			//최소 힙에 입력
			pQ.push(-in);
		} 
		
	}	
	
	return 0;
}

