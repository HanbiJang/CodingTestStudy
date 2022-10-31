#include <iostream>
#include <vector>
#include <string>

#include <set> //***
#include <algorithm>

using namespace std;

// ���� : 
// (1) ���� ª�� ��
// (2) ���� �� 
// (3) �ߺ� ���� 

struct my{
	string str;
	
	my(string str){
		this->str=str;
	}
	
	bool operator< (const my& other)const{
		if(str.size()!=other.str.size()) return str.size()<other.str.size();
		else return str<other.str;
	}
};

int main(){
	
	int N;
	cin>>N;
	
	set<my> arr;
	
	for(int i=0; i<N; i++){
		string str;
		cin>>str;
		
		arr.insert(my(str));

	}
	
	//sort(arr.begin(), arr.end());
	
		
	for(auto i: arr){
		cout<<i.str<<endl;
	}
	
	return 0;
}

