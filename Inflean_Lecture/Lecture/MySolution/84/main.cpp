#include <iostream>
#include <vector>

using namespace std;

int N;
vector<pair<int,int> > arr;
int ch[16]; // 1~N까지 
int sum;
int max_=-2147000000;

void re(int r){
	if(r==N){
		if(sum>max_) max_ = sum;
		return;
	}
	else{
		
		for(int i=r; i<arr.size();i++){
			
			if(ch[i]==0){				
				//N일 밖이라면 
				if(i+arr[i].first>N) {
					if(i==N-1) re(N); //i가 마지막 날이라면 continue하고 끝나면 안 됨 
					else continue;
				}
				
				//[1]선택 - N일 안쪽이라면 
				for(int j=i; j<i+arr[i].first; j++) ch[i]=1; //기간만큼 1넣음 
				sum+=arr[i].second; 
				re(i+arr[i].first); 
				
				//[2]선택 취소 
				for(int j=i; j<i+arr[i].first; j++) ch[i]=0;
				sum-=arr[i].second;
			}			
		}
		
	}
}


int main() {
	
	scanf("%d",&N);
	for(int i=0; i<N; i++){
		int a,b;
		scanf("%d %d",&a, &b);
		arr.push_back(make_pair(a,b));
	}
	
	re(0);
	
	printf("%d",max_);
	
	return 0;
}
