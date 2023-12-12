#include <iostream>

using namespace std;

long long f(int N){

	if(N<=1) return 1;
	else{
		return f(N-1)*N;	
	}
}

int main(){
	
	//양수 N이 주어질 때 N!을 구하라
	int N;
	cin>>N;
	
	cout<<f(N); 

	return 0;
}

