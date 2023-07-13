#include <iostream>
#include <string>

using namespace std;

//B진법 수 N을 10진법으로 출력하기 
int main(){
	
	ios_base::sync_with_stdio(false);

	int B;
	string N;
	cin>>N>>B;
	
	int ans=0;
	int bb=1;

	for(int i=N.length()-1; i>=0; i--){
		if(N[i]>='0' && N[i]<='9'){			
			ans += (N[i]-'0')*bb;
		}
		else{
			ans += (N[i]-'A'+10)*bb;
		}
		bb*=B;
	}
	
	cout<<ans;
	
	return 0;
}

