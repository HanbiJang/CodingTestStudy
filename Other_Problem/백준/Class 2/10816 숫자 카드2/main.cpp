#include <iostream>
#include <vector>
#include <unordered_map>

//#include <algorithm>

using namespace std;

int main(){
	unordered_map<int,int> m;
	int N,M;
	cin>>N;
	for(int i=0; i<N; i++){
		int a;
		scanf("%d",&a);
		
		m[a]++;
	}
	
	cin>>M;
	for(int i=0; i<M; i++){
		int b;
		scanf("%d",&b);
		
		cout<<m[b]<<" ";
	}
	

	return 0;
}

