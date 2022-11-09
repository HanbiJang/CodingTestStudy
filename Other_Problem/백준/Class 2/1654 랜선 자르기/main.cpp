#include <iostream>
#include <vector>

using namespace std;

int count(int mid, vector<int>& arr){
	int cnt=0;
	
	for(int i=0; i<arr.size(); i++){
		int x = arr[i];
		while(x>=mid){
			cnt++;
			x -= mid;
		}
	}
	
	return cnt;
}

int main(){
	long long lt=1,rt=2147000000, mid;
	int ans=0;
		
	int K;
	cin>>K;
	
	int N;
	cin>>N;
	vector<int> arr;
	
	for(int i=0; i<K; i++){
		int a;
		cin>>a;
		if(rt<a) rt = a;
		
		arr.push_back(a);
	}
	
	while(lt<=rt){
		mid = (lt+rt)/2;
		int cnt = count(mid,arr);
		if(cnt>=N){ //만듦 => 더 크게 
			lt = mid+1;
			ans = mid;
		}	
		else{ //못 만듦 => 더 작게 
			rt = mid-1;
		}			
	}
	
	cout<<ans;

	return 0;
}

