#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main(){
	
	int cnt=0;
	//전깃줄의 개수 
	int n;
	cin>>n;
	
	vector<pair<int,int> > info; 
	//연결 정보
	for(int i=0; i<n; i++){
		int a,b;
		cin>>a>>b; //500이하 양수 
		
		info.push_back(make_pair(a,b));
	}
	
	vector<int> dp(n,1); 
	
	//최대 증가 수열 찾기 -> (안 없애도 될 전선수 수 a 세기)
	//맞게 연결된 전선은 오름차순임! 
	//전체 전기선 수 - a : 답 
	//정렬
	sort(info.begin(), info.end());
	int a=0;
	
	for(int i=0; i<n; i++){
		for(int j=0; j<i; j++){
			if(info[i].second>info[j].second){
				dp[i] = dp[i]>dp[j]+1 ? dp[i]: dp[j]+1;
			}
		}
	}
	
	a = *max_element(dp.begin(), dp.end());
	
	cnt = n - a;
	cout<<cnt;
	
	return 0;
}

