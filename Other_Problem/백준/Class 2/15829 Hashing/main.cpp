#include <iostream>
#include <string>


using namespace std;


int main(){
	
	int r = 31;
	int M = 1234567891;
	
	int L;
	cin>>L;
	
	long long ans=0;
	
	string str;
	cin>>str;
	
	long long rs=1;
	
	for(int i=0; i<L; i++){
		ans+= ((str[i]-'a'+1)*rs)%M;
		rs*=r;
		rs%=M;
	}
	cout<<ans%M;
	
	return 0;
}

