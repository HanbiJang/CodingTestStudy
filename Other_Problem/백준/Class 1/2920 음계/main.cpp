#include <iostream>
#include <vector>
#include <queue>
#include <string>

using namespace std;

int main(){
	
	int arr[8];
	
	for(int i=0; i<8; i++){
		cin>>arr[i];
	}
	
	//증가 수열인지, 감소 수열인지, 믹스 수열인지 확인함 
	int res=0;
	for(int i=1; i<8; i++){
		if(arr[i-1]<arr[i]){
			res++;
		}
		else{
			res--;
		}
	
	}
	if(res==7){
		cout<<"ascending";
	}
	else if(res==-7){
		cout<<"descending";
	}
	else{
		cout<<"mixed";
	}
	
	return 0;
}

