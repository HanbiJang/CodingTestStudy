#include <iostream>
#include <vector>
#include <stack>

using namespace std;


int main(){
	int sum=0;
	int K;
	cin>>K;
	stack<int> s;
	for(int i=0; i<K; i++){
		int a;
		cin>>a; 
		
		if(a==0){
			sum-=s.top();
			s.pop();
		}
		else{
			s.push(a);
			sum+=a;
		}
	}
	
	cout<<sum;
	
	return 0;
}

