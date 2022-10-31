#include <iostream>
#include <vector>
#include <string>

#include <algorithm>

using namespace std;

int main(){
	
	int N;
	cin>>N;

	string str="666";
	int tmp=666;
	int cnt=0;
	
	while(cnt!=N){
		bool isRight=false;
		int six=0;
		for(int i=0; i<str.size(); i++){
			if(str[i]=='6'){
				six++;
				if(six>=3){
					isRight=true;
					break;
				}	
			}
			else{
				six=0;
			}
		}
		
		if(isRight) {
			cnt++;
			if(cnt==N){
				break;
			}
		}
		str = to_string(++tmp);
	}
	
	cout<<tmp;
	
	return 0;
}

