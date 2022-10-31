#include <iostream>
#include <vector>
#include <algorithm>
//#include <unordered_map> ***¾ÈµÊ 

using namespace std;


int main(){
	vector<int> arr;
	
	int N,M;
	scanf("%d",&N);
	
	for(int i=0; i<N; i++){
		int a;
		//cin>>a;		
		scanf("%d",&a);
		
		arr.push_back(a);
	}
	
	sort(arr.begin(), arr.end());
	
	//cin>>M;
	scanf("%d",&M);
	
	for(int i=0; i<M; i++){
		int b;
		//cin>>b;
		scanf("%d",&b);
		
		bool has=false;
		int lt=0,rt=arr.size()-1;
		
		while(lt<=rt){
			int mid = (lt+rt)/2;
			
			if(arr[mid]==b){
				has=true;
				break;
			}
			else if(arr[mid]>b){
				rt = mid-1;
			}
			else{
				lt = mid+1;
			}
		}
		
		if(has) printf("1\n");
		else printf("0\n");
		
	}
	
	return 0;
}

