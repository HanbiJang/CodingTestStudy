#include <iostream>
#include <algorithm>

using namespace std;

int main(){
	
	ios_base::sync_with_stdio(false);

	//N���� ���� �־����� ��, �̸� ������������ �����ϴ� ���α׷��� �ۼ��ض�
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

