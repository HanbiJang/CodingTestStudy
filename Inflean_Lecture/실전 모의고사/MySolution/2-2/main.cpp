#include <iostream>
#include <string>
#include <map> 

using namespace std;

int main() {
	
	int cnt=0;
	//�Է� 
	string str1; //�� ���ڿ����� �κ� ���ؾ� �� 
	cin>>str1;
	string str2;
	cin>>str2;
	
	//�Ƴ��׷��� �Ǵ� ���ӵ� �κ� ���ڿ��� �� ����
	map<char, int> m_str2;
	map<char, int> m_str1;
	
	for(int i='a'; i<='z'; i++){ //�ʱ�ȭ 
		m_str2[(char)i]=0;
		m_str1[(char)i]=0;
	}
	
	for(int i=0; i<str2.size(); i++){
		m_str2[str2[i]]++;
		m_str1[str1[i]]++;
	}
	

	
	if(m_str2==m_str1) cnt++;
	
	//�����̵� ������ 
	for(int i=str2.size(); i<str1.size(); i++){
		m_str1[str1[i-str2.size()]]--; //�ձ��� ����
		m_str1[str1[i]]++; //�ޱ��� ���ϱ�
		
		if(m_str2==m_str1) cnt++;
	}	
		
	//��� 
	cout<<cnt;
	
	return 0;
}

