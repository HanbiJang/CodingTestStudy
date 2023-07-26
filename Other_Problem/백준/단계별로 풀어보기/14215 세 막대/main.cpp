#include <iostream>
#include <vector>
using namespace std;

//삼각형의 조건 :
//가장 긴 변의 길이 < 다른 두 변의 길이의 합 
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
	
	int other = sum - max_; //변 합 
	
	if(max_ >= other){
		cout<<other + (other-1);
	}
	else{
		cout<<other+max_;
	}

	return 0;
}

