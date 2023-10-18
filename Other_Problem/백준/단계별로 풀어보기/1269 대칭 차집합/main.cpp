#include <iostream>
#include <map>

using namespace std;


int main(){
	
	ios_base::sync_with_stdio(false);
	
	//�� ������ ��Ī �������� ������ ������ ����϶�
	//(A-B)�� (B-A)�� �������� A�� B�� ��Ī �������̶�� �Ѵ�
	
	int a;
	int b;

	map<int,int> ma, mb;
	 
	cin>>a;
	cin>>b;
	
	for(int i=0; i<a; i++){
		int aa;
		cin>>aa;

		ma[aa]++; //���� ���� 
	} 
	
	for(int i=0; i<b; i++){
		int aa;
		cin>>aa;

		mb[aa]++;
	} 
	
	int cnt = a+b;
	
	//������ ���ϱ�	 
	for(auto iter = ma.begin(); iter!= ma.end(); ++iter){
		if(mb[iter->first]>0){ //�������̸�, 
			cnt-= (mb[iter->first] + iter->second); //������ŭ ���� 
		}	
	}
	
	cout<<cnt;
	

	return 0;
}

