#include <iostream>
#include <vector>
#include <string>
#include <map>

using namespace std;

int main(){
	
	int N, M; //����� ����Ʈ �ּ��� ��, ��й�ȣ�� ã������ ����Ʈ �ּ��� �� 
	cin>>N>>M; 
 	
 	//����Ʈ �ּ� - �ҹ���,�빮��,���,��ħǥ
	//��й�ȣ - �빮��
	//��ü 
	map<string,string> m;
 	for(int i=0; i<N; i++){
 		char str1[21];
 		char str2[21];
		scanf("%s", str1);
		scanf("%s", str2);
		
		string str1_(str1);
		string str2_(str2);		
		m[str1_]=str2_; 	
	}
	
	//ã������ ��й�ȣ 
	for(int i=0; i<M; i++){
		char str[21];
		scanf("%s", str);	
		printf("%s\n",m[str].c_str());
	}
		
	return 0;
}

