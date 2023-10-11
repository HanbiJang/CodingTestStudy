#include <iostream>

using namespace std;

// f(n) = a1n + a0;
// 모든 n >= n0 에 대해서 f(n)<= c*g(n) 인 양의 상수 c과 n0가 존재한다 
// g(n) = c*n 으로 가정함 !! (중요... 이해 못한 포인트) 

int main(){
	
	ios_base::sync_with_stdio(false);
	
	int a1,a0;
	int c;
	int n0;
	
	cin>>a1>>a0>>c>>n0;
	
	
	if(c-a1 != 0){
		float samePos = a0 / (c-a1);
		if( a1>c ) cout<<0;
		else if ( (samePos > n0 && (a1*n0 + a0 > c*n0 )) ) cout<<0;
		else cout<<1;
	}
		
	else //교점이 없음
	{
		if(n0 * a1 + a0 <= c*n0) cout<<1;
		else cout<<0;
	} 

	return 0;
}

