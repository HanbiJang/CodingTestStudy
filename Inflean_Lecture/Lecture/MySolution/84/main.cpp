#include <iostream>
#include <vector>

using namespace std;

int N;
vector<pair<int,int> > arr;
int ch[16]; // 1~N���� 
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
				//N�� ���̶�� 
				if(i+arr[i].first>N) {
					if(i==N-1) re(N); //i�� ������ ���̶�� continue�ϰ� ������ �� �� 
					else continue;
				}
				
				//[1]���� - N�� �����̶�� 
				for(int j=i; j<i+arr[i].first; j++) ch[i]=1; //�Ⱓ��ŭ 1���� 
				sum+=arr[i].second; 
				re(i+arr[i].first); 
				
				//[2]���� ��� 
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
