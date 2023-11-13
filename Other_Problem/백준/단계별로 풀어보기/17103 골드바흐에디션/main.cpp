#include <iostream>
#include <vector>
#include <cmath>

using namespace std;

vector<int> all(1000001,1);
int main(){
	
	//¦�� n�� �� �Ҽ��� ������ ��Ÿ���� ǥ�� : ������ ��Ƽ��
	//¦�� n�� �־����� ���� ������ ��Ƽ���� ������ ���϶�
	
	int t;
	cin>>t;	
	
	//�����佺�׳׽��� ü
	for(int i=2; i<=sqrt(all.size());i++){
		//��� �����
		for(int j=2; i*j<all.size(); j++){
			all[i*j]=0;
		}		
	} 
	
	for(int i=0; i<t; i++){
		int n;
		cin>>n;
		
		int res=0;
		
		for(int j=2; j<=n/2; j++){
			if(all[j]==1 && all[n-j]==1){
				res++;
			}
		}
		
		cout<<res<<endl;
	} 
		
	return 0;
}

