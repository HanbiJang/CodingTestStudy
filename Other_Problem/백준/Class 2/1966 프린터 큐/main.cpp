#include <iostream>
#include <string>
#include <queue>

using namespace std;


int main(){
	
	
	
	int N;
	cin>>N;
	
	for(int i=0; i<N; i++){
		
		int a,b; //문서의 개수, 궁금한 문서 인덱스 
		cin>>a>>b; 
		
		queue< pair<int,int> > q;
		priority_queue<int> pQ;
		int ans=1;
		
		for(int i=0; i<a; i++){
			int c; //중요도 
			cin>>c;
			
			q.push(make_pair(i,c)); //인덱스, 중요도 
			pQ.push(c);
		}
		
		while(!q.empty()){
			if(pQ.top()==q.front().second){
				
				if(b == q.front().first){ //출력
					cout<<ans<<endl;
					break;
				}
				q.pop();
				ans++;
				pQ.pop(); //다음 중요도 업데이트 
			}
			else{
				//맨뒤로
				q.push(make_pair(q.front().first, q.front().second));
				q.pop(); 
			}
		}
		
	}

	return 0;
}

