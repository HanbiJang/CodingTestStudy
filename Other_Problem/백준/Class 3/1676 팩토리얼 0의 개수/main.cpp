#include <iostream>
#include <vector>

using namespace std;

int main(){
	
	//n!���� ó�� 0�� �ƴ� ���ڰ� ���ö����� 0�� ������ ���϶�
	int N;
	cin>>N;
	int cnt=0;
	
	int n2=0;
	int n5=0;
	
	//2�� 5�� ���� ���� => 10���� ���յǸ� �ڿ� 0�� ���� �ȴ� 
	for(int i=2; i<=N; i++){
		int tmp2=i;
		int tmp5=i;
		int tmpn2=0;
		while(1){
			if(tmp2%2==0) n2++;
			else break;
			tmp2/=2;
		}
		n2+=tmpn2;
		
		int tmpn5=0;
		while(1){
			if(tmp5%5==0) n5++;
			else break;
			tmp5/=5;
		}
		n5+=tmpn5;
					
	}
	
	cout<<min(n2,n5);
	
	return 0;
}

