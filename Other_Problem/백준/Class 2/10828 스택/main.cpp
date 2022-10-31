#include <iostream>
#include <string>

using namespace std;

//스택 구현
struct myStack{
	int top=-1;
	int element[10001];
	
	void push(int ele){
		element[++top] = ele;
	}
	
	int pop(){
		if(top>=0){ 
			return element[top--];
		}
		
		else return -1;
	}
	
	int size(){
		return top+1;	
	}
	
	int empty(){
		if(top>=0) return 0;
		else return 1;
	}
	
	int top_(){
		if(top>=0) 
			return element[top];
			
		else return -1;
	}
};
 
int main(){
	
	myStack my;
	int N;
	cin>>N;
	
	for(int i=0; i<N; i++){
		string str;
		//getline(cin,str);
		cin>>str;
		
		if(str.compare("push")==0){
			int ele; 
			cin>>ele;
			
			my.push(ele);
			continue;
		}
		
		if(str.compare("pop")==0){			
			cout<<my.pop()<<endl;
			continue;
		}
		
		if(str.compare("top")==0){		
			cout<<my.top_()<<endl;
			continue;
		}
		
		if(str.compare("size")==0){		
			cout<<my.size()<<endl;
			continue;
		}
		
		if(str.compare("empty")==0){		
			cout<<my.empty()<<endl;
			continue;
		}
	}
	

	return 0;
}

