#include <iostream>
#include <vector>
#include <string>
#include <map>

using namespace std;

int main(){
	
	int N, M; //저장된 사이트 주소의 수, 비밀번호를 찾으려는 사이트 주소의 수 
	cin>>N>>M; 
 	
 	//사이트 주소 - 소문자,대문자,대시,마침표
	//비밀번호 - 대문자
	//전체 
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
	
	//찾으려는 비밀번호 
	for(int i=0; i<M; i++){
		char str[21];
		scanf("%s", str);	
		printf("%s\n",m[str].c_str());
	}
		
	return 0;
}

