#include <iostream>
#include <vector>
using namespace std;

//�ﰢ���� ���� :
//���� �� ���� ���� < �ٸ� �� ���� ������ �� 
int main(){
	
	ios_base::sync_with_stdio(false);
	
	vector<int> arr(3);
	cin>>arr[0]>>arr[1]>>arr[2];
	
	int sum = arr[0] + arr[1] + arr[2];
	
	int max_=0;
	
	for(int i=0; i<3; i++){
		if(max_ < arr[i]){
			max_ = arr[i];
		}
	}
	
	int other = sum - max_; //�� �� 
	
	if(max_ >= other){
		cout<<other + (other-1);
	}
	else{
		cout<<other+max_;
	}

	return 0;
}

