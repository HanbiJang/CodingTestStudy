#include <iostream>

using namespace std;

int main(){
	
	ios_base::sync_with_stdio(false);

	 //�� ���� �ּҰ������ ���϶�
	 int t;
	 cin>>t;
	 
	 for(int i=0; i<t; i++){
	 	int a,b;
	 	scanf("%d %d",&a,&b);
	 	
	 	//�ּҰ���� ���ϱ�
		//�ִ� ����� * (a/�ְ�) * (b/�ְ�)
		
		//�ִ����� ���ϱ�
		int minnum = min(a,b);

		long long mm = 1;
		for(int j=minnum; j>=2; j--){
			if(a%j==0 && b%j==0){
				mm = j;
				break;
			}
		}
		long long res = (long long)(a/mm)*b;
		
		printf("%lld\n",res);
	 } 
			
	return 0;
}

