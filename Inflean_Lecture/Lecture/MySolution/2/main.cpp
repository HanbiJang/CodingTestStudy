#include <iostream>
using namespace std;
/* run this program using the console pauser or add your own getch, system("pause") or input loop */
//a부터 b까지의 자연수의 합을 구하라 
int main() {
	int a,b,i,sum=0;
	cin>>a>>b;
	for(i=a; i<b;i++){
		cout<<i<<" + ";
		sum = sum+i;
	}
	cout<<b<<" = ";
	cout<<sum+b;
	return 0;
}
