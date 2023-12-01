#include <iostream>
#include <map>
#include <string>

using namespace std;

int main(){
	
	int N; //������� ���� ����� �� 
	scanf("%d", &N);
	
	int res = 0;
	map<string, bool> m;
	m["ChongChong"]=true;
	
	for(int i=0; i<N; i++){
		char a_[25]; //���
		char b_[25];
		scanf("%s", a_);
		scanf("%s", b_);
		
		string a = a_;
		string b = b_;

		if(m[a]==true || m[b]==true){
			m[a]=true;
			m[b]=true;
			//res++; //***������ ������� �� ���� �� ����***  
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

