#include <iostream>
#include <queue>
#include <cmath>

using namespace std;

struct my{
	int a;
	
	my(int a_){ a = a_; }
	
	bool operator <(const my &other)const{
		if(abs(a)!=abs(other.a))
			return abs(a)>abs(other.a);
		else 
			return a>other.a;
	}
};

int main(){
	
	ios_base::sync_with_stdio(false);
	
	int n;
	cin>>n;
	
	priority_queue<my> q;
	
	for(int i=0; i<n; i++){
		int a;
		cin>>a;
		
		if(a==0){
			if(!q.empty()){
				cout<<q.top().a<<endl;
				q.pop();
			}
			else{
				cout<<0<<endl;
			}

		}
		else{
			q.push(my(a));
		}
	} 

		
	return 0;
}

