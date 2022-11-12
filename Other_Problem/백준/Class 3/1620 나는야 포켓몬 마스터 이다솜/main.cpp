#include <iostream>
#include <vector>
#include <string>
#include <unordered_map> 

using namespace std;


int main(){
	
	int N,M; //도감의 포켓몬 개수, 문제개수 
	cin>>N>>M;
	
//	vector<string> arr;
	unordered_map<int, string> Mnum;
	unordered_map<string, int> Mname;
	
	for(int i=1; i<=N; i++){
		char str_[21];
		scanf("%s", str_);
		string str = str_;
		
		//map
		Mnum[i]=str;
		Mname[str]=i;
		
	}
	
	for(int i=1; i<=M; i++){
		//문제가 알파벳이면 포켓몬 번호 
		//문제가 숫자면 포켓몬 번호에 해당하는 숫자 출력 
		char str_[21];
		scanf("%s", str_);
		string str = str_;
		
		//숫자, 문자 구분 
		if(str_[0]-'0'>=0 && str_[0]-'0'<=9){ //num
			printf("%s\n",Mnum[stoi(str)].c_str());
		}
		else{ //name
			printf("%d\n",Mname[str]); 
		}
		
	}
	
		
	return 0;
}

