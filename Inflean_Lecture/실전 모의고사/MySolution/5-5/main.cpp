#include <iostream>
#include <vector>
#include <string>

using namespace std;

int arr[10];
int ch[10];
int tmp[10];

int ans=2147000000;

void re(int n){
	if(n==10){

		int sum1=0;
		int sum2=0;
		int sum3=0;
		for(int i=1; i<=9; i++){
			if(i<=3){
				sum1+=arr[tmp[i]];
			}
			else if(i<=6){
				sum2+=arr[tmp[i]];
			}
			else{
				sum3+=arr[tmp[i]];
			}
		}
		int min_;
		min_ = min(sum1,sum2);
		min_ = min(min_,sum3);
		
		int max_;
		max_ = max(sum1,sum2);
		max_ = max(max_,sum3);
		
		
		if(ans > max_- min_){
			ans=max_- min_;
		}

		return;
	}
	else{
		for(int i=1; i<=9; i++){
			if(ch[i]==0){
				ch[i]=1; //사용 
				tmp[n]= i; //순서 정하기 
				re(n+1);
				ch[i]=0;
			}
		}	
	}
	
}

int main() {

	for(int i=1; i<=9; i++){
		cin>>arr[i];
	}
	
	re(1);
	
	cout<<ans;
	
	return 0;
}

