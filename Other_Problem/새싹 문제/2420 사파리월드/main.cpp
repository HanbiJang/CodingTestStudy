#include <iostream>
#include <string>

using namespace std;


int main(){
	long long a,b;
	cin>>a>>b;
	long long res = abs( max(a,b)-min(a,b));
	
	printf("%lld",res);

	return 0;
}


