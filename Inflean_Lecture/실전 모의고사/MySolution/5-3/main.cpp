#include <iostream>
#include <vector>
#include <string>

using namespace std;

int arr[1002][1002]; //dp

int main() {
	int max_=0;
	
	string str1,str2;
	cin>>str1>>str2;
	
	str1.insert(str1.begin(), ' ');
	str2.insert(str2.begin(), ' ');
	
	//arr : 최대 공통 부분 문자열의 길이 
	for(int i=1; i<str1.size(); i++){
		for(int j=1; j<str2.size(); j++){
			if(str1[i]==str2[j]){
				arr[i][j]= arr[i-1][j-1] + 1;
			}
			else{
				arr[i][j] = max(arr[i-1][j], arr[i][j-1]);
			}
			
			if(max_ < arr[i][j]) max_ = arr[i][j];
		}
	}
	
	cout<<max_;
	
	return 0;
}

