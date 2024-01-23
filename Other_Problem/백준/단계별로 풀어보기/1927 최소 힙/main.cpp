#include <iostream>
#include <vector>
#include <queue>

using namespace std;


int main(){
	
	//최소힙을 이용하여 다음과 같은 연산을 지원하는 프로그램을 작성해라
	
	//배열에 자연수 x를 넣는다
	//배열에서 가장 작은 값을 출력하고,
	//그 값을 배열에서 제거한다
	
	int n;
	cin>>n;
	
	priority_queue<int> pq; 
	
	for(int i=0; i<n; i++){
		int x;
		scanf("%d", &x);
		
		if(x==0){
			//배열에서 가장 작은 값을 출력
			//배열에서 제거 
			//배열이 비어있다면 0을 출력 
			if(pq.empty()){
				printf("0\n");
			}
			else{
				printf("%d\n", pq.top()*-1);
				pq.pop();
			}
		}
		else{
			pq.push(-1*x);
		}
	}

	return 0;
}

