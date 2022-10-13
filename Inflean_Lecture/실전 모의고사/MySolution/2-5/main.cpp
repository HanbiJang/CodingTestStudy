#include <iostream>
#include <vector>
#include <string>
#include <map>

using namespace std;

int max_=0;
int cnt=0;
int ch[16]; //재료 선택
int N,D,K; //학생수,재료 번호, 사용가능 재료 종류 
vector<vector<int> > arr; //학생별 좋아하는 재료 

//재료 고르기 
void re(int n, int start){
	if(n == K){ //K개 선택하기
		
		cnt=0;
		for(int i=0; i<N; i++){
			bool is = true;
			for(int j=0; j<arr[i].size(); j++){
				if(ch[arr[i][j]]!=1){
					is=false;
					break;
				}
			}
			if(is) cnt++;			
		}

		if(cnt> max_) max_ = cnt;
		return;
	}
	else{
		//선택하기 
		for(int i=start; i<=D; i++){
			ch[i]=1;
			re(n+1, i+1);
			ch[i]=0;
		}
		
	}

}

int main() {	
	
	cin>>N>>D>>K;
		
	for(int i=0; i<N; i++){ //i번째 학생 
		int a;
		cin>>a;
		
		arr.push_back(vector<int> (a));
		for(int j=0; j<a; j++){ //i번째 학생의 좋아하는 재료 
			int n;
			cin>>n;
			arr[i][j]=n;
		}
	}
	
	re(0,1);
	
	cout<<max_; //output
	
	return 0;
}

