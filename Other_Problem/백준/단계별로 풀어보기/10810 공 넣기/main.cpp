#include <iostream>
#include <string>

using namespace std;

int box[101];

int main(){
	
	ios_base::sync_with_stdio(false);
	
	int n,m;
	
	cin>>n>>m;

	for(int i=0; i<m; i++){
		int a,b,c;
		cin>>a>>b>>c;
		
		for(int j=a; j<=b; j++){
			box[j] = c;
		}
		
	}
	
	for(int i=1; i<=n; i++){
		cout<<box[i]<<" ";
	} 
			
	return 0;
}

