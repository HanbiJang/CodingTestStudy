#include <iostream>
#include <map>
#include <string>

using namespace std;

int main(){
	
	int N; //사람들이 만난 기록의 수 
	scanf("%d", &N);
	
	int res = 0;
	map<string, bool> m;
	m["ChongChong"]=true;
	
	for(int i=0; i<N; i++){
		char a_[25]; //기록
		char b_[25];
		scanf("%s", a_);
		scanf("%s", b_);
		
		string a = a_;
		string b = b_;

		if(m[a]==true || m[b]==true){
			m[a]=true;
			m[b]=true;
			//res++; //***만났던 사람들이 또 만날 수 있음***  
		}
	}
	
	for(auto mm : m){
		if(mm.second == true){
			res++;
		} 
	}
	
	printf("%d",res);

	return 0;
}

