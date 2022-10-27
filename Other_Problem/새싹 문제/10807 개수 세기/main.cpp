#include <iostream>

using namespace std;

int arr[101];

int main(){
	
	int N;
	cin>>N;
	for(int i=0; i<N; i++){
		cin>>arr[i];
	}
	
	int v;
	cin>>v;
	
	int cnt=0;
	for(int i=0; i<N; i++){
		if(v==arr[i]) cnt++;
	}
	
	cout<<cnt;

	return 0;
}

