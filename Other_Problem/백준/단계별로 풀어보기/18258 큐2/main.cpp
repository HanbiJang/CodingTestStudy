#include <iostream>
#include <deque>
#include <string> 

using namespace std;

int main(){
	
	//큐를 구현하라
	deque<int> dq;
	
	int N;
	scanf("%d", &N);
	
	for(int i=0; i<N; i++){
		
		char str_[10];
		int a;
		
		scanf("%s", str_);
		string str = str_;
		
		if(str=="push"){
			scanf("%d", &a);
			dq.push_back(a);
		}		
		else if(str=="pop"){
			if(dq.empty()){
				printf("-1\n");
			}
			
			else{
				printf("%d\n", dq.front());
				dq.pop_front();
			}
		}	
		else if(str=="size"){
			printf("%d\n", dq.size());
		}	 
		else if(str=="empty"){
			if(dq.empty()) printf("1\n");
			else printf("0\n");
		}
		else if(str=="front"){
			if(dq.empty()) printf("-1\n");
			else printf("%d\n", dq.front());
		}
		else if(str=="back"){
			if(dq.empty()) printf("-1\n");
			else printf("%d\n", dq.back());
		}
		
	}
			
	return 0;
}

