#include <iostream>
#include <vector>
#include <string>

using namespace std;

int main() {

	int N;
	cin>>N;
	
	vector<int> arr(N+2);
	vector<int> tmp(N+2);
	
	for(int i=1; i<=N; i++){
		cin>>arr[i];
	}
	
	//최소 비용을 구하라
	
	for(int i=1; i<=N+1; i++){
		if(i-2>=0)
			tmp[i] = min(tmp[i-2] + arr[i] , tmp[i-1] + arr[i]);
		else{
			tmp[i] = min(arr[i], tmp[i-1] + arr[i]);
		}	
	} 
	
	cout<<tmp[N+1];

	return 0;
}

