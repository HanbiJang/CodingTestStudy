#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int M; //조 개수,  
int N; // 학생 수 

int count(int n, vector<int> &arr){ 
	
	//조 나누기
	int s=0;
	int cnt=0; //나눠진 조의 개수 
	for(int i=1; i<=N; i++){
		if(arr[i]<=n){		
			if(s+arr[i] <= n) s+=arr[i];
			else{
				s=arr[i];
				cnt++;
			}
		}
		else{
			return M+1; //불가 
		}
	}
	//마지막 처리
	if(s<=n) cnt++; 
	
	return cnt;

}

vector<int> sumcount(int n, vector<int> &arr){ 
	vector<int> sums;
	//합계 조사 
	int s=0;
	for(int i=1; i<=N; i++){
		if(arr[i]<=n){		
			if(s+arr[i] <= n) s+=arr[i];
			else{
				sums.push_back(s);
				s=arr[i];
			}
		}
	}	
	//마지막 처리
	if(s<=n) sums.push_back(s);
	
//	cout<<endl;
//	for(int i=0; i<sums.size(); i++){
//		cout<<sums[i]<<" ";
//	}
//	cout<<"//";

	
	return sums;

}

int main() {

	int ans = 2147000000;
	int sum=0;	 
	cin>>N>>M;	
	vector<int> arr(N+1);
	for(int i=1; i<=N; i++){
		cin>>arr[i];
		sum+=arr[i];
	}
	
	//각 조의 성적의 합중 최대값이 최소가 되도록 M개로 나눴을 때 최댓값
	int lt = arr[0] , rt = sum; 
	int mid; //담을 크기 
	
	while(lt<=rt){
		
		mid =(lt+rt)/2;
		
		int cnt = count(mid,arr);
		if(cnt==-1 || cnt > M){ //큼->나누는 양을 크게 
			lt = mid+1;			
		}
		else if(cnt == M){ //같음->나누는 양을 작게 
			vector<int> sums = sumcount(mid,arr);
			int max_ = *max_element(sums.begin(), sums.end());
			if(ans > max_) ans = max_;
			rt = mid - 1; 
		}
		else { //적음 -> 나누는 양을 작게 
			rt = mid-1;
		}
		
		//cout<<mid<<" "<<cnt<<" / " <<ans<<endl;
		//cout<<ans<<endl;
	}
	
	cout<<ans;
	
	return 0;
}

