#include <iostream>
#include <vector>
#include <string>

using namespace std;

int main() {
	
	int N;
	string arr[31];
	int idx=0; //�տ������� �󸶳� ������ üũ 
	
	//input 
	cin>>N;
	for(int i=0; i<N; i++){
		cin>>arr[i]; 
	}
	
	int min_=2147000000;
	
	//�ִ� ���� ���λ� ã��
	for(int i=1; i<N; i++){
		for(int j=0; j<arr[i].size(); j++){ //���ڼ� Ȯ�� 
			if(arr[0][j] == arr[i][j]){ //0��° ���ڿ� �� 
				idx=j;
			}
			else{
				break;
			}
		}
		if(min_>idx) min_ = idx;
	} 
	
	
	//output
	cout<<arr[0].substr(0,min_+1); 
	
	return 0;
}

