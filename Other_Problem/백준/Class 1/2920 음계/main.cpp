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
	
	//���� ��������, ���� ��������, �ͽ� �������� Ȯ���� 
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

