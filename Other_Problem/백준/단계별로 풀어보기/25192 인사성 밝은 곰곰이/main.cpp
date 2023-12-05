#include <iostream>
#include <string>
#include <map>

using namespace std;


int main(){
	
	//곰곰티콘이 사용된 횟수를 구하라 
	
	//ENTER : 새로운 사람의 입장
	//그외 : 닉네임 
	//곰곰티콘 -> 새로운 사람이 입장한 이후 처음 채팅을 입력하는 사람은 반드시 곰곰티콘으로 인사
	
	int cnt = 0;
	int N;
	scanf("%d",&N); //채팅방의 기록수
	
	map<string,int> mm;
	
	for(int i=0; i<N; i++){
		char c[21];
		scanf("%s", c);
	
		string str = c;
		
		if(str=="ENTER"){
			mm.clear();
		}
		else{
			if(mm[str]==0){
				mm[str]++;
				cnt++;
			}						
		}
		
	} 
	

	cout<<cnt;
	
		
	return 0;
}

