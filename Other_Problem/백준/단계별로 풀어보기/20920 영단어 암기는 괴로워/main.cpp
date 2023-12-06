#include <iostream>
#include <string>
#include <algorithm>
#include <map>
#include <vector>

using namespace std;


struct word{
	string str; //단어 
	int a; //빈도  
	
	bool operator<(const word& other){
		if(a!=other.a){ //빈도 - 역순 
			return a>other.a;
		}
		else{ //a==word.a
			//길이 - 역순 
			if(str.length()!=other.str.length()) return str.length()>other.str.length();  
			else { //사전순 
				return str<other.str;
			}
		}
	}
};

int main(){
	

	//엉어 단어장 만들기
	//자주 나오는 단어 -> 앞에 배치
	//길이가 길수록 -> 앞에 배치
	//알파벳 사전 순으로 앞에있는 단어 -> 앞에 배치
	
	//길이 M이상인 단어만 이용 
	
	//영어 지문에 나오는 단어의 개수 N
	//길이 기준이 되는 M
	
	int N,M;
	scanf("%d %d", &N, &M);
	
	vector<word> ans;
	map<string,int> mm;
	
	for(int i=0; i<N; i++){
		char cc[11];
		scanf("%s", cc);
		
		string str = cc;
		
		if(str.length()>=M){
			mm[str]++;
		} 	
	}
	
	for(auto m : mm){
		word ww;
		ww.str = m.first;
		ww.a = m.second;
		ans.push_back(ww);
	}
	
	sort(ans.begin(), ans.end());
 	for(auto res : ans){
		printf("%s\n",res.str.c_str()); 
	}

	return 0;
}

