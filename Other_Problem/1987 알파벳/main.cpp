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
	
	if( tmp.length() > max_){ //�ߺ� ���� ���� Ž���� �Ϸ�Ǿ� ������ ��츦 ���� ���⿡ ��ġ��
		max_= (int)tmp.length();  
	}
	
	for(int i=0; i<4; i++){
		int nextx= r+x[i]; //�� 
		int nexty= c+y[i]; //�� 
		
		if(nextx<1||nexty<1||nextx>R||nexty>C) continue;

		if(ch[nextx][nexty]==0){

			if(!isWrong(arr[nextx][nexty])){ //�Ȱ��� �ܾ� 
				//�湮 
				ch[nextx][nexty]=1;
				tmp.push_back(arr[nextx][nexty]);
				re(nextx,nexty);
				
				//��� 
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

