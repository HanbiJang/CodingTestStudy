#include <iostream>
using namespace std;
//�ִ� �������̸� ����϶� 
/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main() {
	//input.txt ���Ͽ��� input �� ��������
	//[����]�� �о�ͼ�[rt] stdin(ǥ���Է¿� ���� ������)���� �����Ѵ�. *ä���Ҷ��� ��������* 
	//freopen("input.txt","rt",stdin); 
	 
	//int ���� ���� �� : - 2�� 31���� = -2147000000 <=> ���� ū�� : 2�� 31���� 
	int n,i,a,max=-2147000000,min = 2147000000;
	cin>>n; 
	for(i=1; i<=n; i++){
		cin>>a; //cin : enter ġ�ų� space�� �����ϰų� ����  
		if(a>max){
			max=a;
		}
		if(a<min){
			min=a;
		}
	}
	cout<<max - min;
	
	
	return 0;
}
