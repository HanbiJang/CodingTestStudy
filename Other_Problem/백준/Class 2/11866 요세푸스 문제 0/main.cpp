#include <iostream>
#include <vector>
#include <queue>

using namespace std;

//요세푸스 , 조세퍼스 
int main(){
	int N,K;
	cin>>N>>K;
	
	cout<<"<";
	
	int cnt=0;
	queue<int> q;
	for(int i=1; i<=N; i++){
		q.push(i);	
	}
	int out=0;
	
	while(!q.empty()){
		cnt++;
		if(cnt==K){
			out++;
			if(out==N){
				cout<<q.front();
			}
			else cout<<q.front()<<", ";
			q.pop();
			cnt=0;
		}		
		else{
			q.push(q.front());
			q.pop();
		}
	}
	
	cout<<">";

	return 0;
}

