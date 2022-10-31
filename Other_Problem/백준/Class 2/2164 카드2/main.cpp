#include <iostream>
#include <vector>
#include <queue>

//#include <algorithm>

using namespace std;



int main(){
	int ans=1;
	int N;
	cin>>N;
	
	queue<int> q;
	for(int i=1; i<=N; i++){
		q.push(i);
	}
	
	while(q.size()>1){
				
		q.pop();
		
		if(q.size()==1) {
			ans = q.front();
			break;
		}		
		
		q.push(q.front());
		q.pop();
	}
	
	cout<<ans;

	return 0;
}

