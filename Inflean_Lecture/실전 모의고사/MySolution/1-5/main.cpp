#include <iostream>
#include <vector>
#include <string>
#include <queue>

using namespace std;

struct my{
	int a,b,c;
	my(int a,int b,int c){
		this->a=a;
		this->b=b;
		this->c=c;
	}
	
	bool operator< (const my& other)const{
		if(c!=other.c) return c<other.c;
		if(a!=other.a) return a<other.a;
		return b<other.b;
	}
}

int main() {
	int ans=0;
	int N,M,R; //시간, 일종류 갯수 , 휴식시간 
	cin>>N>>M>>R;
	
	vector<my> arr;
	
	for(int i=0; i<M; i++){
		int a,b,c; //시작,끝,공부효율성 
		cin>>a>>b>>c;
		arr.push_back(my(a,b,c));
	}

	
	//가장 높은 효율성 출력
	
	
	int cnt=0;
	for(int i=0; i<N; i++){ //스타트 고르기 
		cnt=arr[i].c;
		priority_queue<my> pQ;
		
		int time=arr[i].b;
		while(time<N){
			for(int j=i+1+; j<N; j++){
				if()
			}
		}
		if(cnt>ans) {ans = cnt;}
	}
	
	//output
	cout<<ans; 

	return 0;
}

