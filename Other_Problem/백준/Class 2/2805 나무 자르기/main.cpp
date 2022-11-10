#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

long long count(long long mid, vector<long long>& arr){ //������ �� �ִ� ���� ���� ��ȯ 
	long long cnt=0;
	
	for(int i=0; i<arr.size(); i++){
		if(arr[i]-mid>0) cnt += arr[i]-mid;
	}
	
	return cnt;
}

int main(){
	
	long long N,M;
	cin>>N>>M;
	vector<long long> arr;
	
	for(int i=0; i<N; i++){
		long long a;
		scanf("%ld",&a);
		arr.push_back(a);
	}
	
	long long lt,rt,mid;
	lt = 0;
	rt = *max_element(arr.begin(), arr.end());
	long long ans = 0;
	
	while(lt<=rt){
		mid = (lt+rt)/2;
		long long cnt= count(mid, arr) ; //�������� �ִ� ���� ���� 
		if(cnt>=M){ //�� ���� ũ�� 
			lt = mid+1;
			ans = mid;
		}
		else{ //�� ���� �۰� 
			rt = mid-1;
		}
	}
	
	cout<<ans;
	
	return 0;
}

