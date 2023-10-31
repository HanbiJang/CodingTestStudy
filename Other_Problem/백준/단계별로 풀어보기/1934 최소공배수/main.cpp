#include <iostream>

using namespace std;

int main(){
	
	ios_base::sync_with_stdio(false);

	 //두 수의 최소공배수를 구하라
	 int t;
	 cin>>t;
	 
	 for(int i=0; i<t; i++){
	 	int a,b;
	 	scanf("%d %d",&a,&b);
	 	
	 	//최소공배수 구하기
		//최대 공약수 * (a/최공) * (b/최공)
		
		//최대공약수 구하기
		int minnum = min(a,b);

		long long mm = 1;
		for(int j=minnum; j>=2; j--){
			if(a%j==0 && b%j==0){
				mm = j;
				break;
			}
		}
		long long res = (long long)(a/mm)*b;
		
		printf("%lld\n",res);
	 } 
			
	return 0;
}

