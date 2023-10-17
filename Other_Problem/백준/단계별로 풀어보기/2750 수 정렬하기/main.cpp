#include <iostream>
#include <algorithm>

using namespace std;

int main(){
	
	ios_base::sync_with_stdio(false);

	//N개의 수가 주어졌을 때, 이를 오름차순으로 정렬하는 프로그램을 작성해라
	int arr[1001];
	int N;
	cin>>N;
	
	for(int i=0; i<N; i++){
		cin>>arr[i];	
	}
	
	sort(arr, arr+N);
	
	for(int i=0; i<N; i++){
		cout<<arr[i]<<endl;
	} 
			
	return 0;
}

