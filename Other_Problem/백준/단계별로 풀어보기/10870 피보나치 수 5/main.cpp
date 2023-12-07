#include <iostream>

using namespace std;

int f(int n){
	
	if(n==0) return 0;
	else if(n==1) return 1;
	else return f(n-1)+f(n-2);
	
}

int main(){
	
	//f(0) = 0
	//f(1) = 1
	//f(n) = f(n-1) + f(n-2)
	
	//f(n)을 구하라
	
	int n;
	cin>>n;
		
	cout<<f(n);
		
	return 0;
}

