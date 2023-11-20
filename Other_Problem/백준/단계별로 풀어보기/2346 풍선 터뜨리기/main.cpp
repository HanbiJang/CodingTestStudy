#include <iostream>
#include <queue>
#include <cmath>

using namespace std;

int main(){
	
	int N;
	cin>>N;
	
	queue<pair<int,int>> q; //인덱스, 풍선숫자 
	
	for(int i=1; i<=N; i++){
		int a;
		cin>>a;
		q.push(make_pair(i,a));
	}
	
	while(!q.empty()){
		pair<int,int> nextThing = q.front();
		q.pop(); //풍선 삭제 
		cout<<nextThing.first<<" ";
		
		if(q.empty()) break;
		
		int nextNum = nextThing.second;
				
		if(nextNum>=0){ //양수일 때
			nextNum = (nextNum)%q.size()==0? nextNum: (nextNum)%q.size();
			//양수면, 0이 나왔을 때, 바로 다음 수가 아니라 1칸 뒤의 수임
			//그러므로 nextNum번 원형으로 돌아야 함		
			
			for(int i=0; i<nextNum-1; i++){ //원형으로 돌아주는 작업 
				q.push(q.front()); //원형 
				q.pop(); 
			}
		}
		else{ //음수일 때
			nextNum = (nextNum*-1)%q.size();
			
			//음수면, 0이 나왔을 때, 바로 다음 수임 
			//그러므로 0번 원형으로 돌아야 함
			
			nextNum = (q.size()+1)- nextNum;
			for(int i=0; i<nextNum-1; i++){ //원형으로 돌아주는 작업 
				q.push(q.front()); //원형 
				q.pop(); 
			}
		}
	}			
	return 0;
}

