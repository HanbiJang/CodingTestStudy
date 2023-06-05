#include <iostream>

using namespace std;


int main(){
	
	ios_base::sync_with_stdio(false);
	
	long long int a,b;
	cin>>a>>b;
	
	if(a>b){
		swap(a,b);
	}
	
	int ans=0;
	for(int i=1; i<=a; i++){
		if(a%i==0 && b%i==0){
			ans=i;
		}
	}
	
	cout<<ans * (a/ans) * (b/ans);
		
	return 0;
}

