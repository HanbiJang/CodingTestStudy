#include <iostream>
#include <string>

using namespace std;

int main(){
	
	ios_base::sync_with_stdio(false);
	
	//������ ���� ���� �Ųٷ� ���� �� �Ȱ��� �ܾ� �Ǻ��ϱ�
	string str, rstr="";
	cin>>str;
	
	for(int i=str.length()-1; i>=0; i--){
		rstr+=str[i];
	}
	
	if(str.compare(rstr)==0){
		cout<<"1";
	}
	
	else cout<<"0";
		
	return 0;
}

