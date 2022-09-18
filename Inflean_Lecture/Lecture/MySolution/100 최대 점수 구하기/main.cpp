#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main() {
	int N,M;
	vector<pair<int,int> > arr;
	vector<int> ans(1001);
	//input
	scanf("%d %d", &N, &M);
	for(int i=0; i<N; i++) //문제 
	{
		int a,b;
		scanf("%d %d",&a,&b);
		arr.push_back(make_pair(a,b)); //점수, 시간 
	}
	
	//냅색
	for(int i=0; i<N; i++){ //문제 종류
		for(int j=M; j>=0; j--){ //시간 
			
			if(j<arr[i].second) continue;
			
			int ss = ans[j -arr[i].second] + arr[i].first;
			if(ans[j]==0){
				ans[j]=ss;
			} 
			else{
				ans[j]=max(ans[j],ss);
			}
		} 		
	} 
	
	
	//output
	//for(int j=0; j<=M; j++){	printf("%d ",ans[j]);	}
	printf("%d", *max_element(ans.begin(), ans.end()));
	
	return 0;
}
