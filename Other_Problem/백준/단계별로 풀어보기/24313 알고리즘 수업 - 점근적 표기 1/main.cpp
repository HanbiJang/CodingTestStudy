#include <iostream>

using namespace std;

// f(n) = a1n + a0;
// ��� n >= n0 �� ���ؼ� f(n)<= c*g(n) �� ���� ��� c�� n0�� �����Ѵ� 
// g(n) = c*n ���� ������ !! (�߿�... ���� ���� ����Ʈ) 

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
		
	else //������ ����
	{
		if(n0 * a1 + a0 <= c*n0) cout<<1;
		else cout<<0;
	} 

	return 0;
}

