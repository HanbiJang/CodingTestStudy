#include <iostream>
#include <set>
#include <string> 

using namespace std;

int main(){
	
	ios_base::sync_with_stdio(false);

	//S�� ���� �ٸ� �κ� ���ڿ��� ������ ���ض�	
	//���� �ٸ� �͵� ���� = set.size(); 
	string S;
	cin>>S;
	set<string> myset;
	
	//�����̵� ������ ���
	//���ڿ� ���� 1~S.length����
	for(int win=1; win<=S.size(); ++win){
		for(int pos=0; pos<=S.size()-win; ++pos){ //***����Ƚ�� win����� ������ �پ�� 
			myset.insert(S.substr(pos,win));
		}		
	} 
	
	cout<<myset.size();
	 
	return 0;
}

