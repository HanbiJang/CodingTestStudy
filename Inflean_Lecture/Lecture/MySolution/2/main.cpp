#include <iostream>
using namespace std;
/* run this program using the console pauser or add your own getch, system("pause") or input loop */
//a���� b������ �ڿ����� ���� ���϶� 
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
