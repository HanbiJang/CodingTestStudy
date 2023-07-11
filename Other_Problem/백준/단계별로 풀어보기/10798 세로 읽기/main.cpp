#include <iostream>
#include <string>

using namespace std;
string arr[5][15];

int main(){
	
	ios_base::sync_with_stdio(false);
	
	for(int i=0; i<5; i++){
		string str;
		cin>>str;
		
		for(int j=0; j<str.length();j++){
			arr[i][j]=str[j];
		}	

	}
	
	for(int j=0; j<15; j++){
		for(int i=0; i<5; i++){
			if(arr[i][j]!="")
				cout<<arr[i][j];
		}
	}
	
	return 0;
}

