#include <iostream>
#include <vector>
#include <queue>

using namespace std;

int L,N; //�ٴ�~�縷 ���� , N���� ������ 
int ch[21];
int sum=0;
int max_=0;

void re(int n,int s,vector<pair<int,int> > &arr){
	
	if(sum==L){
		int curmin=2147000000;
		for(int i=0; i<N; i++){
			if(ch[i]==1){
				if(curmin > arr[i].second){
					curmin = arr[i].second;
				}
			}
		}
		if(max_<curmin) max_=curmin;
		//cout<<curmin<<endl;
		return;
	}
	else{
		for(int i=s; i<arr.size(); i++){
			if(ch[i]==0){
				ch[i]=1;
				sum+=arr[i].first;
				re(n+1, i+1, arr);
				ch[i]=0;
				sum-=arr[i].first;
			}
		}
	}
} 

int main() {
	vector<pair<int,int> > arr;
	
	
	cin>>L>>N;
	for(int i=1; i<=N; i++){
		int a,b; //����, �뷮 
		cin>>a>>b;
		arr.push_back(make_pair(a,b));
	}
	
	//�뷮�� ���� ���� ������ �뷮�� ��
	//�ִ� �뷮 ���ϱ�
	
	re(0,0,arr);
	
	cout<<max_;
	

	return 0;
}

