#include <iostream>
#include <vector>
#include <queue>
#include <algorithm>

using namespace std;

struct MD{
	int M,D;
	
	MD(int m, int d){
		M =m;
		D=d;
	}
	
	// 다중 값 비교 
	bool operator<(const MD &MD_)const{
		if(D!=MD_.D) return D<MD_.D;
		return M<MD_.M;

	}	
	
};

int main() {	
	
	int N;
	scanf("%d",&N);
	
	//input 
	vector<MD> arr; //배열

	for(int i=0;i<N;i++){
		int m,d;
		scanf("%d %d",&m,&d);
		
		arr.push_back(MD(m,d));
	}
	
	sort(arr.begin(),arr.end());
	
	int sum=0;
	priority_queue<int> pQ; //우선순위큐 
	int last = arr[arr.size()-1].D;
	for(int i=last; i>=1; i--){
		for(int j=0;j<arr.size();j++){
			if(arr[j].D==i) pQ.push(arr[j].M);			
		}
		
		if(!pQ.empty()){
			sum+=pQ.top();
			pQ.pop();
		}

	} 
	 
	

	printf("%d",sum);
	
	return 0;
}

