#include <iostream>
#include <string.h>

int cnt = 0;

int recursion(const char *s, int l, int r){
	cnt++;
    if(l >= r)
		return 1;
    else if(s[l] != s[r])
		return 0;
    else 	
		return recursion(s, l+1, r-1);

}

int isPalindrome(const char *s){
	cnt=0; //init
    return recursion(s, 0, strlen(s)-1);
}

using namespace std;

int main(){
	
	//isPalindrome 함수의 반환값과 recursion 함수의 호출 횟수
	
	int T;
	cin>>T;

	for(int i=0; i<T; i++){
		string str;
		cin>>str;		
		
		cout<<isPalindrome(str.c_str());
		cout<<" "<<cnt<<"\n";
		
	}	
	

	return 0;
}

