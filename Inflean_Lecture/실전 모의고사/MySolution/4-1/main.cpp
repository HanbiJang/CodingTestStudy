#include <iostream>
#include <vector>
#include <string>

using namespace std;


int main() {
	
	int N;
	int map[101];
	cin>>N;
	
	for(int i=1; i<=N; i++){
		cin>>map[i];
	}
	
	int max_= 0;
	for(int i=1; i<=N; i++){
		if(map[i]==0){
			//¾Õ
			int tmp=0;
			for(int j=i-1; j>=1; j--){
				if(map[j]==1){
					tmp = i-j;
					break;
				}
			}
			
			//µÚ
			for(int j=i+1; j<=N; j++){
				if(map[j]==1){
					if(tmp!=0) tmp = min(tmp, j-i);
					else tmp = j-i;
					break;
				}
			}
			//cout<<i<< " "  << " "<<tmp<<endl;
			if(max_ < tmp) max_ = tmp;
		}
	}

	cout<<max_; 
	
	return 0;
}

