#include <iostream>
#include <vector>
#include <map>
#include <algorithm>
#include <cmath>

using namespace std;

long long ans1;
int ans2,ans3,ans4;

int main(){
	
	int N;
	cin>>N; //1~500,000
	
	//산술평균	
	//중앙값	
	//최빈값
	//범위 
	
	vector<int> arr;
	map<int,int> m;
	
	for(int i=0; i<N; i++){
		int a;
		scanf("%d",&a); //4000을 넘지 않는 정수 
		
		arr.push_back(a);
		ans1 += (a);
		
		m[a]++;
	}
	//산술평균	
	ans1 = round((double)ans1/N);
	//중앙값		
	sort(arr.begin(),arr.end());
	ans2 = arr[N/2];
	
	//최빈값 중 두번째로 작은 값	
	int mmax=-214700000;
	for(auto i : m){
		if(i.second > mmax) {
			mmax = i.second;
			ans3=i.first;
		}  
	}
	//첫번째로 작은 값을 삭제
	m[ans3]=0;
	for(auto i : m){
		if(i.second == mmax) {
			ans3=i.first;
			break;
		}  
	}
		
	//범위 	
	ans4 = abs(arr[N-1] - arr[0]);
	
	printf("%ld\n%d\n%d\n%d\n", ans1,ans2,ans3,ans4);
	
	return 0;
}

