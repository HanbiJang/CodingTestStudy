#include <iostream>
#include <vector>
#include <deque>

using namespace std;

int main(){
	
	//문제 이해 : https://anwltjdzheldsbql.tistory.com/30
	//시간초과 주의
	 
	//입력 1: 자료구조 갯수!! 
	int N;
	scanf("%d",&N);
	
	vector<int> qs; //자료구조 종류 
	deque<int> dq;
	
	//입력 2: 어느 자료구조에 원소 넣을건지 (push 후 pop함) 
	//0 : 큐, 1: 스택
	//스택은 작동 상, 무시해도 됨
	for(int i=0; i<N; i++){
		int a;
		scanf("%d",&a);
		
		qs.push_back(a);		
	}
	
	//입력 3: 들어있는 초기 원소 
	for(int i=0; i<N; i++){
		int c;
		scanf("%d",&c);
		
		if(qs[i]==0){ //큐만 신경쓴다 
			dq.push_back(c);	
		}
	}

	//입력 3: 삽입할 원소 갯수
	int X;
	scanf("%d",&X);
	
	//원소 삽입 
	for(int i=0; i<X; i++){
		int b;
		scanf("%d",&b);
		
		
		if(!dq.empty()){
			printf("%d ",dq.back());
			dq.pop_back();
			dq.push_front(b);
		}
		
		else{ //스택만 있는 경우 
			printf("%d ",b);
		} 
		
	}

	return 0;
}

