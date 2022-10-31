#include <iostream>
#include <vector>
#include <string>

#include <algorithm>

using namespace std;

int main(){
	
	// 216 => 198 + 1 + 9 + 8 => 198
	int ans=0;
	int N;
	cin>>N;
	
	for(int i=1; i<=N; i++){
		int tmp=i;
		int sum=i;
		while(tmp!=0){
			sum+=(tmp%10);
			tmp/=10;
		}
			
		if(sum==N){
			ans=i;
			break;
		}
	}
	
	cout<<ans;

	return 0;
}

