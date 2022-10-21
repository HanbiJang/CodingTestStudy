#include <iostream>
#include <vector>
#include <queue>

using namespace std;

int x[] = {1,-1,5};
int map[10001];

int main() {
	int S, E,K; //Çö¼öÀÇ À§Ä¡, ¼Û¾ÆÁö À§Ä¡, ¿õµ¢ÀÌ °³¼ö
	cin>>S>>E>>K;
	
	vector<int> arr(K+1); //¿õµ¢ÀÌ ÁÂÇ¥ 
	for(int i=1; i<=K; i++){
		cin>>arr[i];
		map[arr[i]]=-1; //¿õµ¢ÀÌ 
	} 
	
	
	queue<int> q;
	q.push(S);
	
	while(!q.empty()){
		int cur = q.front(); 
		q.pop();
		
		if(cur==E){ //µµÂø
			break;
		}
		
		for(int i=0; i<3; i++){
			int next_ = cur + x[i];
			
			if( next_== E ){
				map[next_] = map[cur] + 1;
				cout<<map[E];
				exit(0);
			}
			else if( next_!=E && map[next_]==-1 || next_<1 || next_>10000) continue;
			
			if(map[next_]==0){
				map[next_] = map[cur] + 1;
				q.push(next_); 
			}			
		}
		
	}
	
	cout<<map[E];
	
	return 0;
}

