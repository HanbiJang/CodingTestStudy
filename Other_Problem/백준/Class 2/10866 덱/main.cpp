#include <iostream>
#include <string>

using namespace std;

//덱 구현
struct myDeque{
	
	int front=0; //***원소가 없는 곳을 가르킴  
	int back=0;
	int element[10001];
	
	void push_front(int ele){
		element[front]=ele; //***(원소가 없는 곳을 가르킴) 주의!! 
		front = ((front-1) + 10001) % 10001; //*************
	}
	
	void push_back(int ele){
		back = (back+1)%10001;	
		element[back] = ele;		
	}	
	
	int pop_front(){
		if(front!=back){
			front = (front+1)%10001;	
			return element[front]; //***(원소가 없는 곳을 가르킴) 주의!! 
		}
		
		else return -1;
	}
	
	int pop_back(){
		if(front!=back){
			int old=back;
			back = ((back-1) + 10001) % 10001; //***
			return element[old]; 
		}
		
		else return -1;
	}	
	
	int size(){
		return ((back-front) + 10001) % 10001;	
	}
	
	int empty(){
		if(back!=front) return 0; //안 비어있는 경우 
		else return 1;
	}
	
	int front_(){
		if(back!=front) 
			return element[(front+1)%10001];
			
		else return -1;
	}
		
	int back_(){
		if(back!=front) 
			return element[back];
			
		else return -1;
	}
};
 
int main(){
	
	myDeque my;
	int N;
	cin>>N;
	
	for(int i=0; i<N; i++){
		string str;
		cin>>str;
		
		if(str.compare("push_front")==0){
			int ele; 
			cin>>ele;
			
			my.push_front(ele);
			continue;
		}
		
		if(str.compare("push_back")==0){
			int ele; 
			cin>>ele;
			
			my.push_back(ele);
			continue;
		}
		
		if(str.compare("pop_front")==0){			
			cout<<my.pop_front()<<endl;
			continue;
		}
		
		if(str.compare("pop_back")==0){			
			cout<<my.pop_back()<<endl;
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

