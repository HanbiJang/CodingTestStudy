#include <iostream>
#include <string>

using namespace std;

int main(){
	
	ios_base::sync_with_stdio(false);
	
	int X;
	cin>>X;
	
	int N;
	cin>>N;
	
	int res = 0;
	for(int i=0; i<N; i++){
		int a,b;
		cin>>a>>b;
		
		res += a*b;
	}
	
	if(X==res){
		cout<<"Yes";
	}
	else{
		cout<<"No";
	}
			
	return 0;
}

