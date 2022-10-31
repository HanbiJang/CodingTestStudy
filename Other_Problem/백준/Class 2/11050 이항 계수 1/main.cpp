#include <iostream>
#include <vector>
#include <string>

#include <algorithm>

using namespace std;

int main(){
	
	int n,r;
	cin>>n>>r;
	
	//이항계수 구하기
	// 5*4 / 2!
	
	int ans=1;
	int tmp=1;
	for(int i=1; i<=r; i++){
		ans*=(n--);
		tmp*=i;
	}	
	
	ans/=tmp;
	
 	cout<<ans;

	return 0;
}

