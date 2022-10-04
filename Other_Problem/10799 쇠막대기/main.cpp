#include <iostream>
#include <vector>
#include <stack>


using namespace std;


int main(){
	
	string str;
	stack<char> S;
	int cnt=0;
	cin >> str;
	//()(((()())(())()))(())
	for(int i=0; i<str.length(); i++){
		if( i!= str.length()-1 && str[i]=='(' && str[i+1]==')'){
			cnt+=S.size();	
			i++; //½ºÅµ 
		}
		else if(str[i]=='('){
			S.push('(');
		}
		else if(str[i]==')'){
			S.pop();
			cnt++;
		}		
	}
	
	printf("%d",cnt);

	return 0;
	
}
