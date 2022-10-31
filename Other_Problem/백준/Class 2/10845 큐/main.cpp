#include <iostream>
#include <string>

using namespace std;

//큐 구현
struct myQueue{
	
	int front=-1; //***원소가 없는 곳을 가르킴  
	int back=-1;
	int element[10001];
	
	void push(int ele){
		element[++back] = ele;		
	}
	
	int pop(){
		if(front!=back){ 
			return element[++front]; //***(원소가 없는 곳을 가르킴) 주의!! 
		}
		
		else return -1;
	}
	
	int size(){
		return back-front;	
	}
	
	int empty(){
		if(back!=front) return 0; //안 비어있는 경우 
		else return 1;
	}
	
	int front_(){
		if(back!=front) 
			return element[front+1];
			
		else return -1;
	}
		
	int back_(){
		if(back!=front) 
			return element[back];
			
		else return -1;
	}
};
 
int main(){
	
	myQueue my;
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
		
		if(str.compare("size")==0){		
			cout<<my.size()<<endl;
			continue;
		}
		
		if(str.compare("empty")==0){		
			cout<<my.empty()<<endl;
			continue;
		}
		
		if(str.compare("front")==0){		
			cout<<my.front_()<<endl;
			continue;
		}
		
		if(str.compare("back")==0){		
			cout<<my.back_()<<endl;
			continue;
		}
		

	}
	

	return 0;
}

