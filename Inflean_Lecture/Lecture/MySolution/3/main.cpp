#include <iostream>

using namespace std;
/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main() {
	int n,i,sum=1;
	
	cin>>n;
	cout<<"1";
	
	//������� ������ ��Ģ ��ü�� ���� 
	//��� ������ ����� ù��°�� 1 �̴�
	
	for(i=2;i<n; i++) { //����� : �ڱ� �ڽ� ���� 
		if(n%i==0){
			//i�� n�� ���  
			cout<<" + "<<i;
			sum += i;
		}
	}
	cout<<" = "<<sum;
	
	return 0;
}
