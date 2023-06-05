#include <iostream>

using namespace std;


int arr[101][101];
int main(){
	
	ios_base::sync_with_stdio(false);
	
	int num; //색종이 개수 
	cin>>num;
	
	for(int i=0; i<num; i++){
		int a,b;
		cin>>a>>b;
		
		for(int j=0; j<10; j++){
			for(int m=0; m<10; m++){
				arr[a+j][b+m] = 1;
			}
		}
		
	}
	
	int res = 0;
	for(int j=1; j<=100; j++){
		for(int m=1; m<=100; m++){
			if(arr[j][m]==1) res++;
		}
	}
	
	cout<<res;
		
	return 0;
}

