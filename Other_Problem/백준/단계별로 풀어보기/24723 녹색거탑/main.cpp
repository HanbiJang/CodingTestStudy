#include <iostream>
#include <cmath>
using namespace std;


int main(){
	
	//녹색 거탑에서 내려오는 경우의 수를 구하라
	//N번의 인접 블록으로의 이동
	
	int N;
	cin>>N;
	
	long long res = 0;
	
	//경우의 수 구하기

	res = pow(2,N);
	cout<<res;

	return 0;
}

