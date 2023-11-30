#include <iostream>

using namespace std;

int main(){
	
	
	int T;
	cin>>T;
	
	//MCN 구하기 
	for(int i=0; i<T; i++){
		int N,M;
		cin>>N>>M;
		
		//강서 사이트 N, 강동 사이트M
		//N개의 다리를 놓아야 할때, 모든 경우의 수 
		//MCN을 구하라 (강동사이트만 고르면 강서는 자동으로 순서 정해짐)
		long long res = 1 ;
		
		int b=1; //분모
		 
		//수의 범위 초과가 일어남*** 
		for(int j=0; j<N; j++){
			res *= (M-j);
			res /= (b);
			b++; //1~N까지 나눠져야함. N~1로 나누면 안나눠짐!!*********
		}
		
		cout<<res<<"\n";
		
	}

	return 0;
}

