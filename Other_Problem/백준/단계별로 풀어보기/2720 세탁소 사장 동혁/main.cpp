#include <iostream>

using namespace std;

int main(){
	
	ios_base::sync_with_stdio(false);
	
	//쿼터, 다임, 니켈, 페니
	int arr[] = {25, 10, 5, 1};
	
	int T;
	cin>>T;
	
	for(int i=0; i<T; i++){
		int mo = 0;
		cin>>mo;
		
		int c = mo;
		
		int ans[] = {0,0,0,0};
		
		for(int j=0; j<4; j++){ //큰것부터 나누기 
			ans[j] = (c/arr[j]);
			c%=arr[j];
		}
		
		for(int j=0; j<4; j++){
			cout<<ans[j]<<" ";
		}
		cout<<endl;
	} 
		
	return 0;
}

