#include <iostream>
#include <string>
#include <vector>

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
		
		//¿ª¼ø
		vector<int> vv(b-a+1);
		for(int j=a; j<=b; j++){
			vv.push_back(box[j]);	
		}
		
		for(int j=a; j<=b; j++){
			box[j] = vv.back();
			vv.pop_back();
		}		
		 
	}
	
	for(int i=1; i<=n; i++){
		cout<<box[i]<<" ";
	}
			
	return 0;
}

