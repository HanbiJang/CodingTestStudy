#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main(){
	
	int n;
	cin>>n;
	vector<int> arr(n,0);
	for(int i=0; i<n; i++){
		int a;
		cin>>a;
		arr[i]=a;
	}
	
	vector<int> tmp_inc(n,0); //증가 
	vector<int> tmp_dec(n,0); //감소 

	// 가장 긴 증가하는 부분 수열 계산 (앞 기준) 
	for (int i = 0; i < n; ++i) { //뒤 
		int maxVal = 1;
        for (int j = 0; j < i; ++j) { //앞 
			if(arr[j] < arr[i] && maxVal < tmp_inc[j]+1){
				maxVal = tmp_inc[j]+1;
			}
		}
		tmp_inc[i]=maxVal;
		
    }  
	// 가장 긴 감소하는 부분 수열 계산 (뒤 기준) 
	for (int i = n-1; i >= 0; --i) { //앞 
		int maxVal = 1;
        for (int j = i+1; j < n; ++j) { //뒤 
        		//앞이 더 커야함 
				if(arr[j] < arr[i] && maxVal < tmp_dec[j]+1){
				maxVal = tmp_dec[j]+1;
			}
		}
		tmp_dec[i]=maxVal;		 
    }

    
	// 가장 긴 바이토닉 부분 수열 길이 계산
	int res = 1; 
	for (int i = 0; i < n; ++i) {
		if(tmp_inc[i]+tmp_dec[i]-1>res)
			res = tmp_inc[i]+tmp_dec[i]-1;
    }	
	
	cout<<res;

	return 0;
}

