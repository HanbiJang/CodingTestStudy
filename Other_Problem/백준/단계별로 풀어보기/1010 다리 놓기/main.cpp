#include <iostream>

using namespace std;

int main(){
	
	
	int T;
	cin>>T;
	
	//MCN ���ϱ� 
	for(int i=0; i<T; i++){
		int N,M;
		cin>>N>>M;
		
		//���� ����Ʈ N, ���� ����ƮM
		//N���� �ٸ��� ���ƾ� �Ҷ�, ��� ����� �� 
		//MCN�� ���϶� (��������Ʈ�� ���� ������ �ڵ����� ���� ������)
		long long res = 1 ;
		
		int b=1; //�и�
		 
		//���� ���� �ʰ��� �Ͼ*** 
		for(int j=0; j<N; j++){
			res *= (M-j);
			res /= (b);
			b++; //1~N���� ����������. N~1�� ������ �ȳ�����!!*********
		}
		
		cout<<res<<"\n";
		
	}

	return 0;
}

