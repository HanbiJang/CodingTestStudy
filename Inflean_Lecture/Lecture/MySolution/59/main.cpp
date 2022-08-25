#include <iostream>

using namespace std;

int ch[11];
void  re(int start, int N){
	
	if(start > N){
		for(int i=1; i<11; i++){
			if(ch[i] != 0){
				printf("%d ", i);
			}

		}
		printf("\n");
		
		return;
	}
	else{
		
		ch[start] = 1;	
		re(start+1,N);
		
		ch[start] = 0;
		re(start+1,N);
		
	}
	
} 

int main() {
	
	int N;
	scanf("%d", &N); 
	
	re(1,N);
	 
	return 0;
}

