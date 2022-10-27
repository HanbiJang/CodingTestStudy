#include <iostream>
#include <string>
using namespace std;


int main(){
	
	int n;
	cin>>n;
	
	string str;
	
	for(int i=0; i<n; i++){
		cin>>str;
		cout<<str[0]<<str[str.size()-1]<<endl;
		str.clear();
	}

	return 0;
}

