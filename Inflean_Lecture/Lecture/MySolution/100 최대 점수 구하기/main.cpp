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
	for(int i=0; i<N; i++) //���� 
	{
		int a,b;
		scanf("%d %d",&a,&b);
		arr.push_back(make_pair(a,b)); //����, �ð� 
	}
	
	//����
	for(int i=0; i<N; i++){ //���� ����
		for(int j=M; j>=0; j--){ //�ð� 
			
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
