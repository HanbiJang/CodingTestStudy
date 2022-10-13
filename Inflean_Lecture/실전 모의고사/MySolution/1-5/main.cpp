#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int time_[1000001];

struct my{
	int a,b,c;
	my(int a, int b, int c){
		this->a=a;
		this->b=b;
		this->c=c;
	}
	
	bool operator<(const my& other)const{
		return b<other.b;
	}
	
};

int main() {
	int max_=0;
	int N,M,R; //�� �ð�, �� ����, �޽Ľð� 
	vector<my> arr;
	
	cin>>N>>M>>R;
	for(int i=0; i<M; i++){
		int a,b,c; //����,��,ȿ�� 
		cin>>a>>b>>c;
		arr.push_back(my(a,b,c));
	}
	
	//DP
	sort(arr.begin(), arr.end());
	for(int i=0; i< arr.size(); i++){ //���� ���� 
		int val;
		if(arr[i].a - R >=1){
			//time�� 1��°����  arr[i].a - R��°���� �� �߿�... 
			//���� ū ���� ã�Ƽ� ���Ͽ� ����
			int maxtmp=0;
			for(int j=0; j<=arr[i].a-R; j++){
				if(maxtmp < time_[j]) maxtmp = time_[j];
			}
			val = maxtmp + arr[i].c;
			
		}
		else{
			val = arr[i].c;
		}
		
		//���� ������ ������ �� ���� ���� �� �ֱ� 
		int j = arr[i].b;
		time_[j]=val;
		
		while( i+1!=arr.size() && j<arr[i+1].b){
			time_[j]=val;			
			j++;			
		}
		
		if(val > max_) max_ = val;
	}
	
	cout<<max_;

	return 0;
}

