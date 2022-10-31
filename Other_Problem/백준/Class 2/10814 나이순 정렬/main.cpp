#include <iostream>
#include <vector>
#include <string>
#include <algorithm>

using namespace std;

struct my{
	int a,b; //나이, 가입순서
	string name; 
	my(int a, int b, string name){
		this->a=a;
		this->b=b;
		this->name=name;
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
		int a;
		string name;
		cin>>a>>name; 
		
		arr.push_back(my(a,i,name));
	}
	
	sort(arr.begin(), arr.end());
	
	for(int i=0; i<N; i++){
		printf("%d %s\n", arr[i].a, arr[i].name.c_str());
	}

	return 0;
}

