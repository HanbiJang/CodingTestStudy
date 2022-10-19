#include <iostream>
#include <vector>
#include <string>
#include <unordered_map>
#include <stack>

using namespace std;

int main() {	
	unordered_map<char,int> uM; //중복확인 + *** 이후에 남은 문자 str[i]의 개수 
	unordered_map<char, int> ch; //이용 확인 
	
	string ans; //답 
	string str;
	cin>>str;
	
	for(int i=0; i<str.size(); i++){
		if(islower(str[i])){
			str[i] = toupper(str[i]); //문자열을 대문자로 통일
		}		
		uM[str[i]]++; 
		ch[str[i]];
	}
	
	//===========================================================
	//스택처럼 풀이 

	for(int i=0; i<str.size(); i++){ 
		
		if(ans.empty()){
			uM[str[i]]--;
			ans+=str[i];
			ch[str[i]]=1;
			continue;
		}
		
		
		if(ch[str[i]]==0){ //글자를 사용 안 함 
		
			while(!ans.empty() && ans.back() >= str[i] && uM[ans.back()]>0 ){ //ans 끝 계속 삭제 
				ch[ans.back()]=0; //사용해제 
				ans.pop_back();	
			}
			
			//포함 
			uM[str[i]]--; //사용 
			ch[str[i]]=1;
			ans+=str[i];
					
		}
		else{ //글자를 이전에 사용함 					
			uM[str[i]]--; 
			continue; //무조건 비포함 
		}
	}	

	
	cout<<ans;
	
	return 0;
}

