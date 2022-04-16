#include <iostream>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */
using namespace std;

// 문제1: n까지의 수에서 m의 배수의 합을 구하라 
int main() {
	int n,m,i,sum=0;
	
	//std::cin>>n>>m;
	cin>>n>>m;
	
	for (i = 1; i<=n; i++){
		if(i%m == 0){
			sum = sum+i;
		}
	}
	cout<<sum;
	return 0;
	
}
