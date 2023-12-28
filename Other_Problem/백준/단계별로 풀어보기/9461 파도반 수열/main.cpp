#include <iostream>

using namespace std;

long long arrP[101];

long long GetP(int n){
	if(n==1 || n==2 || n==3){
		return 1;
	}
	else{
		if(arrP[n]!=0) return arrP[n];
		else return arrP[n] = GetP(n-3) + GetP(n-2);
	}
}


int main(){

	//나선 모양으로 정삼각형을 추가할때 N번째 정삼각형의 변의 길이 구하라 
	
	long long T;
	cin>>T;
	
	// 1,1,1,2,2,3,4,5,7,9 -> 3번째 앞에서 2개의 수의 합
	// f(n) = f(n-3) + f(n-2) 
	
	long long res = 0;
	
	for(long long i=0; i<T; i++){
		int n;
		cin>>n;
		
		res = GetP(n);
		cout<<res<<"\n";
	}
	
	
	return 0;
}

