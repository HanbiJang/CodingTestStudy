#include <iostream>
#include <string>

using namespace std;

int main(){
	
	ios_base::sync_with_stdio(false);

	int n;	
	cin>>n;
	
	int nn=1;
	for(int i=0; i<n; i++){
		
		for(int j=0; j<n-i-1; j++){ // 5-> 4,3,2,1
			printf(" ");
		}
		
		for(int j=0; j<nn; j++){
			printf("*");			
		}
		nn+=2;
		printf("\n");
	}	
	
	nn-=4;
	for(int i=0; i<n-1; i++){ //0,1,2,3
		
		for(int j=0; j<i+1; j++){ // 5-> 1,2,3,4
			printf(" ");
		}
		
		for(int j=nn; j>0; j--){
			printf("*");		
		}
		nn-=2;
		printf("\n");
	}
	
	 
			
	return 0;
}

