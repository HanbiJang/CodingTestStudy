#include <iostream>
#include <vector>

using namespace std;

int map[21][21];
int ch[21];
int N;

int min_ = 2147000000;

void re(int n, int s){

	if(n==N/2){
		int sum1=0; //스타트 
		int sum2=0; //링크 
		
		
		for(int k=1; k<=N; k++){
			if(ch[k]==1){
				for(int i=1; i<=N; i++){
					if(ch[i]==1 && k!=i){
						sum1+=map[k][i];
					} 
				}		
			}
			else{
				for(int i=1; i<=N; i++){
					if(ch[i]==0 && k!=i){
						sum2+=map[k][i];
					} 
				}
			}
		}
		
		int gap = abs(sum1 - sum2);
		if(min_ > gap ){
			min_ = gap;
		}
		return;
	}
	else{
	
		for(int i=s; i<=N; i++){
			ch[i] = 1;		
			re(n+1, i+1);			
			ch[i] = 0;
		}
	
	}
	
}

int main() {
	
	cin>>N;
	for(int i=1; i<=N; i++){
		for(int j=1; j<=N; j++){
			cin>>map[i][j];
		}
	}
	
	re(0,1);
	
	cout<<min_;
	
	return 0;
}

