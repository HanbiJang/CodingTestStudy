#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main() {

	int N;
	int w;
	scanf("%d %d",&N, &w);
	
	vector<pair<int,int> > arr; //���� ���� 
	vector<int> ans(w+1);
	for(int i=0; i<N; i++){
		int a,b;//����, ��ġ 
		scanf("%d %d", &a, &b);
		arr.push_back(make_pair(a,b));
	}
	
	for(int i=0; i<N; i++){ //�� ������ ���ؼ� ���� 		
		for(int j=0; j<=w; j++){ //�� ���Ժ� �ִ� ��ġ �迭 ans 
			
			if(j>=arr[i].first){
				int val = ans[j-arr[i].first] + arr[i].second;	
				if(ans[j]==0){
					ans[j]=val;			
				}
				else{ //�� ū������ �����ϴ� ��� 
					ans[j]= max(val, ans[j]);
				}
			}
			
		}
		
	}
	
	
	//output
	
	printf("%d", *max_element(ans.begin(),ans.end()));
	return 0;
}
