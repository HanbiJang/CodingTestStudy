#include <iostream>

using namespace std;
/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main() {
	int n,i,sum=1;
	
	cin>>n;
	cout<<"1";
	
	//진약수의 갯수는 규칙 자체가 없다 
	//모든 숫자의 진약수 첫번째는 1 이다
	
	for(i=2;i<n; i++) { //진약수 : 자기 자신 제외 
		if(n%i==0){
			//i는 n의 약수  
			cout<<" + "<<i;
			sum += i;
		}
	}
	cout<<" = "<<sum;
	
	return 0;
}
