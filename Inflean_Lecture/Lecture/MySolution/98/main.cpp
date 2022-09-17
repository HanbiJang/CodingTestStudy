#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main() {

	int N;
	int w;
	scanf("%d %d",&N, &w);
	
	vector<pair<int,int> > arr; //보석 정보 
	vector<int> ans(w+1);
	for(int i=0; i<N; i++){
		int a,b;//무게, 가치 
		scanf("%d %d", &a, &b);
		arr.push_back(make_pair(a,b));
	}
	
	for(int i=0; i<N; i++){ //각 보석에 대해서 실행 		
		for(int j=0; j<=w; j++){ //각 무게별 최대 가치 배열 ans 
			
			if(j>=arr[i].first){
				int val = ans[j-arr[i].first] + arr[i].second;	
				if(ans[j]==0){
					ans[j]=val;			
				}
				else{ //더 큰값으로 갱신하는 경우 
					ans[j]= max(val, ans[j]);
				}
			}
			
		}
		
	}
	
	
	//output
	
	printf("%d", *max_element(ans.begin(),ans.end()));
	return 0;
}
