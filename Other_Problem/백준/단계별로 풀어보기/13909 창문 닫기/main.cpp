#include <iostream>
#include <cmath> 
using namespace std;

int main(){
	
	//�����ִ� â���� ������ ���϶�
	//ó������ ��� â���� ��������
	
	int N; //â��, ����� ����	
	cin>>N; //N(1 �� N �� 2,100,000,000)
	
	int res = 0;
	
	/* 
	//��� ���� ¦�� -> ���� 
	//��� ���� Ȧ�� -> ���� 
	
	<<�ð��ʰ� �ڵ�>>
	for(int i=1; i<=N; ++i){
		int ys=0;
		for(int j=1; j<=i; ++j){ //��� ���� �Ǵ� 
			if(i%j==0){
				++ys;
			}		
		}
				
		if(ys%2==1){ //Ȧ�� 
			res++; //���� 
		}
	}
	*/
	
	
	//�������� ����� Ȧ�����̴�...!
	//1~N ���� �ȿ��� �������� ����=��
	
	for(int i=1; i<=N; ++i){
		if(i*i<=N){
			res++;
		}
		else{
			break;
		}
	}
	
	
 	cout<<res;

	return 0;
}

