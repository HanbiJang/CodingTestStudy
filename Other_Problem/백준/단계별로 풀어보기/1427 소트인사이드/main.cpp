#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;


int main(){
	
	ios_base::sync_with_stdio(false);
	
	//���� �� �ڸ����� ������������ �����϶�
	int n;
	cin>>n;
	
	vector<int> arr;
	
	while(n>0){
		arr.push_back(n%10);
		n/=10;
	} 
	
	sort(arr.rbegin(),arr.rend());
	
	for(int i=0; i<arr.size(); i++){
		cout<<arr[i];
	}
	
	return 0;
}

