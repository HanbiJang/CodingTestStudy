#include <iostream>
#include <algorithm>

using namespace std;

int main(){
	
	ios_base::sync_with_stdio(false);
	
	int N, k; //�����ڼ�, ��޴� �ΰ� ��  
	int arr[1001];
	
	cin>>N>>k;
	for(int i=0; i<N; i++){
		cin>>arr[i];
	}
	
	sort(arr, arr+N); //�������� ���� 

	cout<<arr[(N-1)-(k-1)]; //�ڿ��� k-1��° 
	
	

	return 0;
}

