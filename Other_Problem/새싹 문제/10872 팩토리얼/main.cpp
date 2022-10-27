#include <iostream>
#include <string>

using namespace std;

int N;
int res=1; 
void re(int n){
	if(n==N+1){		
		return; 
	}
	else{
		res*=n;
		re(n+1);
	}
}

int main(){


	cin>>N;
	
	re(1);
	cout<<res;	
		
	return 0;
}


