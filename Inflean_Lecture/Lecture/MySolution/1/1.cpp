#include <iostream>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */
using namespace std;

// ����1: n������ ������ m�� ����� ���� ���϶� 
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
