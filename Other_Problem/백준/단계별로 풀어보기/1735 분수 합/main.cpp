#include <iostream>
#include <cmath>

using namespace std;

int main(){

	//�м� ���� ���϶� (���м� ����)
	int a,b,c,d;
	cin>>a>>b>>c>>d;
	
	//�� ���ϱ�
	int resa,resb;
	resa = (a*d) + (c*b);
	resb = b*d;
	
	//���м��� ��Ÿ���� 
	// = �μ��� �ִ����� ã�Ƽ� ������
	
	//�ִ����� ã��
	int gcd = 1;
	for(int i=min(resa,resb); i>=2; --i){
		if(resa%i==0 && resb%i==0){
			gcd=i;
			break;
		}
	}
	//���м��� ��Ÿ����
	cout<<resa/gcd<<" "<<resb/gcd; 
	 			
	return 0;
}

