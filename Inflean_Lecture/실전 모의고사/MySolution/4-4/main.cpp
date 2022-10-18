#include <iostream>
#include <vector>
#include <map>
#include <stack>

using namespace std;

int N;
int ch[22];
map<string,char> m;

bool isRight(string tmp){
	
	stack<char> s;
	
	for(int i=0; i<tmp.size(); i++){
		if(tmp[i]=='('){
			s.push('(');		
		}
		else{
			if(!s.empty())	s.pop();
			else return false;
		}
	}
	
	if(!s.empty()) return false;
	
	return true;
	
}

void re(int n, int s){
	
	if(n==N){
		string tmp;
		for(int i=0; i<N*2; i++){
			if(ch[i]==1){
				tmp+='(';
			}
			else{
				tmp+=')';
			}
		}
		
		if(isRight(tmp)){
			m[tmp]++;
			cout<<tmp<<endl;
		}

		return;
	}
	else{
		for(int i=s; i<N*2; i++){
			if(ch[i]==0){
				ch[i]=1;
				re(n+1,i+1);
				ch[i]=0;
			}
		}
	}
}

int main() {
	
	
	cin>>N;
	
	re(0,0);
	
	cout<<m.size();
	
	return 0;
}

