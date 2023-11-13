#include <iostream>
#include <vector>
#include <cmath>

using namespace std;

vector<int> all(1000001,1);
int main(){
	
	//짝수 n을 두 소수의 합으로 나타내는 표현 : 골드바흐 파티션
	//짝수 n이 주어졌을 때ㅡ 골드바흐 파티션의 개수를 구하라
	
	int t;
	cin>>t;	
	
	//에라토스테네스의 체
	for(int i=2; i<=sqrt(all.size());i++){
		//배수 지우기
		for(int j=2; i*j<all.size(); j++){
			all[i*j]=0;
		}		
	} 
	
	for(int i=0; i<t; i++){
		int n;
		cin>>n;
		
		int res=0;
		
		for(int j=2; j<=n/2; j++){
			if(all[j]==1 && all[n-j]==1){
				res++;
			}
		}
		
		cout<<res<<endl;
	} 
		
	return 0;
}

