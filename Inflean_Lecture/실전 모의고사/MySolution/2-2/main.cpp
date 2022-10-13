#include <iostream>
#include <string>
#include <map> 

using namespace std;

int main() {
	
	int cnt=0;
	//입력 
	string str1; //이 문자열에서 부분 구해야 함 
	cin>>str1;
	string str2;
	cin>>str2;
	
	//아나그램이 되는 연속된 부분 문자열의 총 개수
	map<char, int> m_str2;
	map<char, int> m_str1;
	
	for(int i='a'; i<='z'; i++){ //초기화 
		m_str2[(char)i]=0;
		m_str1[(char)i]=0;
	}
	
	for(int i=0; i<str2.size(); i++){
		m_str2[str2[i]]++;
		m_str1[str1[i]]++;
	}
	

	
	if(m_str2==m_str1) cnt++;
	
	//슬라이딩 윈도우 
	for(int i=str2.size(); i<str1.size(); i++){
		m_str1[str1[i-str2.size()]]--; //앞글자 빼기
		m_str1[str1[i]]++; //뒷글자 더하기
		
		if(m_str2==m_str1) cnt++;
	}	
		
	//출력 
	cout<<cnt;
	
	return 0;
}

