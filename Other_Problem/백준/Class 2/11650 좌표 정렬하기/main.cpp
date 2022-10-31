#include <iostream>
#include <vector>
#include <string>
#include <algorithm>

using namespace std;

struct my{
	int a,b; //x y ÁÂÇ¥ 

	my(int a, int b){
		this->a=a;
		this->b=b;
	}
	
	bool operator< (const my& other)const{
		if(a!=other.a) return a<other.a;
		else return b<other.b;
	}
	
}; 

int main(){

	vector<my> arr;
	
	int N;
	cin>>N;
	
	for(int i=0; i<N; i++){
		int a,b;
		
		cin>>a>>b; 
		
		arr.push_back(my(a,b));
	}
	
	sort(arr.begin(), arr.end());
	
	for(int i=0; i<N; i++){
		printf("%d %d\n", arr[i].a, arr[i].b);
	}

	return 0;
}

