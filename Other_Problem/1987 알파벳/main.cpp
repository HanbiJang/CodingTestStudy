#include <iostream>
#include <vector>
#include <queue>
#include <string>

using namespace std;

char arr[21][21];
int ch[21][21];

int x[]={0,0,1,-1};
int y[]={1,-1,0,0};

int R,C;
int max_=1;

string tmp;

bool isWrong(char c){
	if(tmp.find(c)==string::npos){
		return false;
	}
	else return true;
//	for(int i=0; i<tmp.size(); i++){
//		if(tmp[i]==c) return true;
//	}
//	return false;
}

void re(int r, int c){		
	
	if( tmp.length() > max_){ //중복 문제 없이 탐색이 완료되어 끝나는 경우를 위해 여기에 위치함
		max_= (int)tmp.length();  
	}
	
	for(int i=0; i<4; i++){
		int nextx= r+x[i]; //행 
		int nexty= c+y[i]; //열 
		
		if(nextx<1||nexty<1||nextx>R||nexty>C) continue;

		if(ch[nextx][nexty]==0){

			if(!isWrong(arr[nextx][nexty])){ //안가본 단어 
				//방문 
				ch[nextx][nexty]=1;
				tmp.push_back(arr[nextx][nexty]);
				re(nextx,nexty);
				
				//취소 
				ch[nextx][nexty]=0;
				if(!tmp.empty()) tmp.pop_back();
			}
			
		}

	}
	
}

int main(){

	
	//input
	scanf("%d %d", &R, &C);
	for(int i=1; i<=R; i++){
		string tmp_;
		cin>>tmp_;
		
		for(int j=1; j<=C; j++){
			arr[i][j]=tmp_[j-1];
		}
	}
	
	ch[1][1]=1;
	tmp.push_back(arr[1][1]);
	
	re(1,1);

	//output
	printf("%d",max_);
	
	return 0;
}

