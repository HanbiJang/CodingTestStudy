#include <iostream>
#include <algorithm>

using namespace std;

int main(){
	
	ios_base::sync_with_stdio(false);
	
	int arr[5];
	int sum = 0;
	
	for(int i=0; i<5; i++){
		cin>>arr[i];
		sum+=arr[i];
	}
	
	sort(arr, arr+5);

	//��� ���ϱ�
	cout<<sum/5<<endl;
	
	//�߾� �� ���ϱ� 
	cout<<arr[2];

	return 0;
}

