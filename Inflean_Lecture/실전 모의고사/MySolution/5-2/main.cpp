#include <iostream>
#include <vector>
#include <string>
#include <unordered_map>

using namespace std;

int main() {
	string ans;
	string str;
	cin>>str;
	
	string tmp; 
	int ntmp=0; //숫자 
	for(int i=0; i<str.size(); i++){
		
		if( str[i]=='(' && i==0 || i>=1 && str[i]=='(' && str[i-1]==')'){ //1번 반복 
			ntmp=1;
		}
		
		if(str[i]-'0'>=0 && str[i]-'0'<=9){//숫자 
			ntmp = ntmp*10 + str[i]-'0';
		}
		else{ //문자 
			if(str[i]=='(') continue;
			else if(str[i]==')'){ //반복 적용 
				for(int i=1; i<=ntmp; i++){
					ans+=tmp;
				}
				tmp.clear(); //초기화	
				ntmp=0; 						
			}
			else{ //일반 문자 
				tmp+=str[i];
				//cout<<tmp<<endl;
			}			
		}
	}
	
	cout<<ans;
	
	return 0;
}

