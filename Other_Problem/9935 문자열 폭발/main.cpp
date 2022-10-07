#include <iostream>
#include <vector>
#include <queue>
#include <stack>
#include <string>


using namespace std;


int main(){
	
	string ans;

	//input
	string str; //원본 
	cin>>str;
	string str2; //폭발 
	cin>>str2;
	
	string str3;
	for(int i=0; i<str.length(); i++){
		str3.push_back(str[i]);
		
		//판단
		if(str2.length()<=str3.length()){
			bool b = true;
			for(int j=0; j<str2.length();j++){
				if(str2[j]!=str3[str3.length()-str2.length()+j]){
					b = false;
					break;
				}
			}
			if( b ){			
				for(int j=0; j<str2.length(); j++) str3.pop_back();
			}	
		}
	}
	
	//output
	if(str3.empty()) cout<<"FRULA";
	else cout<<str3;
	
	return 0;
}

