#include <iostream>
#include <vector>
#include <algorithm> 

using namespace std;

int main(){
	
	//����� : N�� A�� ����̰� A != 1 or N
	//� �� N�� ������� ��� �־��� �� N�� ���ϴ� ���α׷��� �ۼ��϶�
	
	
	int T; //������� ���� 
	cin>>T;
	
	vector<int> arr;
	for(int i=0; i<T; i++){
		int a;
		//�����
		cin>>a;
		arr.push_back(a);
	}
	
	sort(arr.begin(), arr.end());
	
	cout<<arr[0]*arr[arr.size()-1];
	
	

	return 0;
}

