#include <iostream>
#include <vector> 

using namespace std;

int main(){
	
	//��ġ�� ��� : �ڽź��� �� ū��ġ�� ����� �� + 1
	int N;
	cin>>N;
	vector<pair<int,int> > arr;
	for(int i=0; i<N; i++){
		int a,b;
		cin>>a>>b;
		arr.push_back(make_pair(a,b));
	}
	
	for(int i=0; i<N; i++){
		int cnt=0;
		
		for(int j=0; j<N; j++){
			
			if(arr[i].first < arr[j].first && arr[i].second < arr[j].second){
				cnt++;
			}
			
		}
		cout<<cnt+1<<" ";
	}
	 
	
	return 0;
}

