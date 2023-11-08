#include <iostream>
#include <cmath>

using namespace std;

int main(){

	//분수 합을 구하라 (기약분수 형태)
	int a,b,c,d;
	cin>>a>>b>>c>>d;
	
	//합 구하기
	int resa,resb;
	resa = (a*d) + (c*b);
	resb = b*d;
	
	//기약분수로 나타내기 
	// = 두수의 최대공약수 찾아서 나누기
	
	//최대공약수 찾기
	int gcd = 1;
	for(int i=min(resa,resb); i>=2; --i){
		if(resa%i==0 && resb%i==0){
			gcd=i;
			break;
		}
	}
	//기약분수로 나타내기
	cout<<resa/gcd<<" "<<resb/gcd; 
	 			
	return 0;
}

