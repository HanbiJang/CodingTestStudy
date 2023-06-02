#include <iostream>
#include <string>
#include <queue>
#include <cstring>

using namespace std;

bool visit[10001];
string result = ""; //연산 결과 

int main(){
	int x;
	scanf("%d",&x);
	
	for(int i=0; i<x; i++){
		
		int a,b;
		scanf("%d %d",&a,&b);
		
		//초기화 
		queue<int> q;
		result.clear();
		memset(visit, false, sizeof(visit)); // visit 배열 초기화
		
		q.push(a);
		while(!q.empty()){
			int curNum = q.front();
			q.pop();
			if(curNum == b){
				printf("%s\n", result.c_str());
				break;
			}
			
			int nextNum = curNum * 2;
			if(nextNum > 9999) nextNum %= 10000;
			if(visit[nextNum]==false){
				result.push_back('D');
				q.push(nextNum);					
			}
			
			nextNum = curNum-1;
			if(nextNum==0) nextNum = 9999;
			if(visit[nextNum]==false){			
				result.push_back('S');
				q.push(nextNum);		
			}
			
			int d1  = curNum/1000;
			int d1_ = curNum%1000;
			nextNum = d1_*10 + d1;
			if(visit[nextNum]==false){
				result.push_back('L');
				q.push(nextNum);			
			}
			
			int d4  = curNum%10;
			int d4_ = curNum/10;
			nextNum = d4*1000 + d4_;
			if(visit[nextNum]==false){			
				result.push_back('R');
				q.push(nextNum);			
			}
		}
		
		return;
	}

	return 0;
}

