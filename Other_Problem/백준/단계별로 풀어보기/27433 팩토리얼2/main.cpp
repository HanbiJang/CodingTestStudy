#include <iostream>

using namespace std;

long long f(int N){

	if(N<=1) return 1;
	else{
		return f(N-1)*N;	
	}
}

int main(){
	
	//��� N�� �־��� �� N!�� ���϶�
	int N;
	cin>>N;
	
	cout<<f(N); 

	return 0;
}

