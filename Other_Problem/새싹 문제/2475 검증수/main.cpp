#include <iostream>
#include <string>
using namespace std;


int main(){
	
	int ans;
	
	for(int i=0; i<5; i++){
		int a;
		cin>>a;
		
		ans += a*a;
	}

	cout<<ans%10;
	
	return 0;
}

