#include <iostream>
#include <vector>
#include <queue>
#include <string>

using namespace std;

int map[51][51];

int main(){
	
	//브루트 포스
	
	int M,N;
	cin>>M>>N;
	
	for(int i=1; i<=M; i++){
		string str;
		cin>>str;
		
		for(int j=1; j<=N; j++){
			char a = str[j-1]; 
			
			if(a=='B'){
				map[i][j]=1;
			}
			else{
				map[i][j]=-1;
			}
		}
	}
	
	int min_=2147000000; //최소의 수를 찾기
	
	for(int i=1; i<=M-7; i++){
		for(int j=1; j<=N-7; j++){  
			
			int cur = map[i][j];
			int next1 = cur;
			int next2 = cur*-1;
			int cnt1=0;
			int cnt2=0;
			
			//8X8 탐색 - 경우 1,2
			for(int k=0; k<8; k++){
				for(int r=0; r<8; r++){
					if(k==0 && r==0) {
						cnt2++;
						continue;
					}
					
					next1 *= -1;
					next2 *= -1;
						
					if(map[i+k][j+r]!=next1){
						cnt1++;
					}
					
					if(map[i+k][j+r]!=next2){
						cnt2++;
					}
					
				}
				next1 *= -1; //한번 더
				next2 *= -1;
			}
					
			if(min_ > min(cnt1, cnt2)) min_ = min(cnt1, cnt2);						
		}
	}

	cout<<min_; 
	
	return 0;
}

