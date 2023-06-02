#include <iostream>
#include <string>

using namespace std;

int box[101];

int main(){
	
	ios_base::sync_with_stdio(false);

	int n,m;
	cin>>n>>m;
	
	for(int i=1; i<=n; i++){
		box[i]=i;
	}
	
	for(int i=0; i<m; i++){
		int a,b;
		cin>>a>>b;
		
		//swap
		int tmp = box[a];
		box[a]= box[b];
		box[b] = tmp;
	}
	
	for(int i=1; i<=n; i++){
		cout<<box[i]<<" ";
	}
			
	return 0;
}

