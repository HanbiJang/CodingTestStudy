#include <iostream>
#include <algorithm>

using namespace std;

int main(){
	
	ios_base::sync_with_stdio(false);
	
	int N, k; //응시자수, 상받는 인간 수  
	int arr[1001];
	
	cin>>N>>k;
	for(int i=0; i<N; i++){
		cin>>arr[i];
	}
	
	sort(arr, arr+N); //오름차순 정렬 

	cout<<arr[(N-1)-(k-1)]; //뒤에서 k-1번째 
	
	

	return 0;
}

