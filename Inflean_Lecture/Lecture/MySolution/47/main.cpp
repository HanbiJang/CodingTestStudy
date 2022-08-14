#include <iostream>
#include <vector>

using namespace std;

int main() {
	int N;
	int cnt = 0;
			
	// input
 	scanf("%d",&N);
 	vector< vector<int> > arr( N+2, vector<int>(N+2,0) );
 	
 	for(int i=1; i<=N; i++){
 		for(int j=1; j<=N; j++){
			scanf("%d", &arr[i][j]);	
		}			
	}
 	
 	// Å½»ö
	 for(int i=1; i<=N; i++){
	 	for(int j=1; j<=N; j++){
	 		
	 		if( arr[i][j] > arr[i-1][j]  // up
			 && arr[i][j] > arr[i+1][j] // down
			 && arr[i][j] > arr[i][j-1] // left
			 && arr[i][j] > arr[i][j+1] // right 
			 ) {
	 			cnt++;
			}	
	 		
		 }
	 } 	  
	
	// output 
	printf("%d", cnt);
	
	return 0;
}

