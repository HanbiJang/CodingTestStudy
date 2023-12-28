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

	//���� ������� ���ﰢ���� �߰��Ҷ� N��° ���ﰢ���� ���� ���� ���϶� 
	
	long long T;
	cin>>T;
	
	// 1,1,1,2,2,3,4,5,7,9 -> 3��° �տ��� 2���� ���� ��
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

