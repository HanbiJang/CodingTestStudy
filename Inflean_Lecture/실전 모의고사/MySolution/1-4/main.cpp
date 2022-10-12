#include <iostream>
#include <vector>
#include <string>

using namespace std;

int N;
int min_=2147000000;
int ch[17];
int arr1[17];
int arr2[17];

void re(int n){
	
	if(n==N/2){ //흰돌인 선수 구함 
		int w=0;
		int b=0;
		
		for(int i=0; i<N; i++){
			if(ch[i]==1) w+= arr1[i];
			else b+=arr2[i];
		}
		int gap = abs(w-b);
		if(min_> gap){
			min_ = gap;
		}
		 
	}
	else{
		
		for(int i=n; i<N; i++){ //*** 
			if(ch[i]==0){
				ch[i]=1;
				re(n+1);
				ch[i]=0;
			}			
		}
		
		
	
	}	
}

int main() {
	
	//input
	cin>>N;
	for(int i=0; i<N; i++){
		scanf("%d %d", &arr1[i], &arr2[i]);
	}
	
	//흰돌 출전 선수 뽑기 
	re(0);
	
	
	//output
	//능력치의 최소차 
	printf("%d", min_); 
	
	return 0;
}

