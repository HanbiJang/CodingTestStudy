#include <iostream>

using namespace std;

int main(){
	
	ios_base::sync_with_stdio(false);

	
	int a;
	cin>>a;
	
	int base = 3;
	int add  = 1;
	for(int i=1; i<a; i++){
		add*=2;
		base += add;
	}
	
	cout<<base*base;

	
	return 0;
}

