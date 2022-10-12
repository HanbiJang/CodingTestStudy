#include <iostream>
#include <vector>
#include <string>

using namespace std;

int main() {

	string a = "it is time to study";
	
	//가장 긴 문자열 출력
	a+=' ';
	int preidx= 0;
	int max_ = 0;
	string ans;
	for(int i=0; i<a.size(); i++){
		if(a[i] == ' '){
			int size_ = (i-1) - preidx;
			if(max_ < (i-1) - preidx){
				max_ = size_;
				ans = a.substr(preidx+1,size_);	
			}
			preidx=i;
		}
	}
	if(max_==0) cout<<a;
	else cout<<ans;
	
	return 0;
}

