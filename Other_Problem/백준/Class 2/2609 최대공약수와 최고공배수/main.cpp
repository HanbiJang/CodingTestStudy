#include <iostream>
#include <vector>
#include <string>

#include <algorithm>

using namespace std;

int main(){
	
	int a,b;
	cin>>a>>b;
	
	//최대공약수
	int ans1; 
	
	for(int i=min(a,b); i>=1; i--){
		if(a%i==0 && b%i==0){
			ans1=i;
			break;
		}
	}
	
	cout<<ans1<<endl;
	
	//최소공배수 : 최대공약수 * a * b 
	int ans2 = ans1 * (a/ans1) * (b/ans1);
	cout<<ans2;

	return 0;
}

