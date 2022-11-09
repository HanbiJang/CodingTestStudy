#include <iostream>
#include <string>
#include <stack>

using namespace std;


int main(){
	
	
	
	string str;
	while(1){
		str.clear();
		stack<char> s;
		getline(cin,str);
		bool ans = true; 
		if(str.compare(".")==0) break;
		
		for(int i=0; i<str.size(); i++){
			if(str[i]=='(' || str[i]=='['){
				s.push(str[i]);
			}
			else if(str[i]==')'){
				if(s.empty() || s.top()!='('){
					ans = false;
					break;
				}
				s.pop();	
			}
			else if(str[i]==']'){
				if(s.empty() || s.top()!='['){
					ans = false;
					break;
				}
				s.pop();			
			}
		}
		if(!s.empty() || ans == false ) cout<<"no"<<endl;
		else cout<<"yes"<<endl;
	}
	

	return 0;
}

