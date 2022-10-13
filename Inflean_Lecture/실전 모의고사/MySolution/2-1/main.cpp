#include <iostream>
#include <vector>
#include <string>

using namespace std;

int main() {
	
	string str;
	cin>>str;
	str+='a'; //아무 문자나 붙이기 
	
	//ab 050 cdoj 33 eden 17 sd
	//연속된 숫자의 합
	int ans=0;
	int tmp=0; 
	for(int i=0; i<str.size(); i++){ 
		int ask = str[i]-'0'; //숫자라면 0~9 
		if(ask>=0 && ask<=9){ //숫자 
			tmp = (tmp * 10) + ask;
		}
		else{
			ans+=tmp;
			tmp=0;
		}
	}
	
	cout<<ans;
	
	return 0;
}

