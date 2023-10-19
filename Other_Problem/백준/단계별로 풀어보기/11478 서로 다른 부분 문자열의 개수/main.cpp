#include <iostream>
#include <set>
#include <string> 

using namespace std;

int main(){
	
	ios_base::sync_with_stdio(false);

	//S의 서로 다른 부분 문자열의 개수를 구해라	
	//서로 다른 것들 구분 = set.size(); 
	string S;
	cin>>S;
	set<string> myset;
	
	//슬라이딩 윈도우 사용
	//문자열 길이 1~S.length까지
	for(int win=1; win<=S.size(); ++win){
		for(int pos=0; pos<=S.size()-win; ++pos){ //***실행횟수 win빼줘야 실행이 줄어듦 
			myset.insert(S.substr(pos,win));
		}		
	} 
	
	cout<<myset.size();
	 
	return 0;
}

