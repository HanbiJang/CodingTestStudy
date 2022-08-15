#include <iostream>


using namespace std;

int main() {
	
	int N;
	int cnt = 0;
	int* front, *right;
	int posX = 0;
	int posY = 0;
	
	// get input
	scanf("%d", &N);

	front = new int[N]; // ї­ 
 	right = new int[N]; // За 
 	
 	for(int i=0; i<N; i++){
 		scanf("%d",&front[i]);
	}
	
 	for(int i=0; i<N; i++){
 		scanf("%d",&right[i]);
	}
	
	// check	
	for(int i=0; i<N; i++){
		
		for(int j=0; j<N; j++){
			
			if( front[i] > right[j] ) cnt += right[j];
			else cnt += front[i];
			
		}
		
	}	
	
	// output
	printf("%d",cnt); 	

	return 0;
}

