#include <iostream>
#include <vector>
#include <string>

using namespace std;

int main() {
	
	string str;
	cin>>str;
	str+='a'; //�ƹ� ���ڳ� ���̱� 
	
	//ab 050 cdoj 33 eden 17 sd
	//���ӵ� ������ ��
	int ans=0;
	int tmp=0; 
	for(int i=0; i<str.size(); i++){ 
		int ask = str[i]-'0'; //���ڶ�� 0~9 
		if(ask>=0 && ask<=9){ //���� 
			tmp = (tmp * 10) + ask;
		}
		else{
			ans+=tmp;
			tmp=0;
		}
	}
	
	cout<<ans;
	
	return 0;
}

