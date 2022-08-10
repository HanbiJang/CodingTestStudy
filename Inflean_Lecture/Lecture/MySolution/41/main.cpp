#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;
int main() {
	
	int N;
	int cnt = 0;
	
	// get input
	scanf("%d" , &N);
	
	int sum;
	int start;
	int end;
	for(int i=N/2+1; i>=1; i--){
		sum = 0;
		start = 0;
		end = i;
		for(int j=end; j>=1; j--){
			sum += j;
			if( sum == N ){
				cnt++;
				start = j;
				
				// output
				printf("%d +",start);
				for(int k=start+1; k< end; k++){
					printf(" %d +",k);
				}
				printf(" %d = %d\n",end,N);
				break;
			} 
			else if ( sum > N ){
				break;
			}
		}
		
	}
			
	// output
	printf("%d ", cnt);

	return 0;
}
