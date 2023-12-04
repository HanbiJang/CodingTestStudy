#include <iostream>
#include <vector>
#include <algorithm> 

using namespace std;

int main(){
	
	//진약수 : N이 A의 배수이고 A != 1 or N
	//어떤 수 N의 진약수가 모두 주어질 때 N을 구하는 프로그램을 작성하라
	
	
	int T; //진약수의 개수 
	cin>>T;
	
	vector<int> arr;
	for(int i=0; i<T; i++){
		int a;
		//진약수
		cin>>a;
		arr.push_back(a);
	}
	
	sort(arr.begin(), arr.end());
	
	cout<<arr[0]*arr[arr.size()-1];
	
	

	return 0;
}

