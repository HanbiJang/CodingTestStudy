#include <iostream>
//#include <vector>
//#include <string>

using namespace std;

//vector<int> arr;
int ch[21];

void add(int num){
	++ch[num];
}

void remove(int num){
	ch[num]=0;
}	

int check(int num){ //있으면1, 없으면 0 
	if(ch[num]==0) return 0;
	else return 1;
}

void toggle(int num){
	if(ch[num]==0){
		ch[num]++;
	}
	else{
		ch[num]=0;
	}
}

void all(){
	for(int i=1; i<=20; i++){
		ch[i]=1;
	}
}

void empty(){
	for(int i=1; i<=20; i++){
		ch[i]=0;
	}
}

int main(){
	
	int n;
	cin>>n;
	
	for(int i=0; i<n; i++){
		char str_[10];
		scanf("%s",str_);
		
		string str = str_;
		int m;	
		
		if(str.compare("add")==0){
			scanf("%d",&m);
			add(m);
		}
		else if(str.compare("remove")==0){
			scanf("%d",&m);
			remove(m);
		}		
		else if(str.compare("check")==0){
			scanf("%d",&m);
			int res = check(m);
			printf("%d\n",res);
		}		
		else if(str.compare("toggle")==0){
			scanf("%d",&m);
			toggle(m);
		}	
		else if(str.compare("all")==0){
			all();
		}		
		else if(str.compare("empty")==0){
			empty();
		}		
			
	} 
 
		
	return 0;
}

