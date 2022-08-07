#include <iostream>
#include <vector>

using namespace std;

int main() {
	int S,N;
	int arr[1001];
	
	// get input
	scanf("%d %d", &S ,&N);
	for(int i=1; i<=N; i++){
		scanf("%d", &arr[i] );
	}
	
	vector<int> cash(N);

	int i,j;
	bool con = false;
	// selection sort
	int tmp; 
	vector<int> old; 
	for(i=1; i<=N; i++){
		tmp =  arr[i]; // save i index element in tmp
		for(j=i-1; j>=0; j--){ // j : i-1 ~ 0	
			if(cash[j] != tmp){ 
				old.push_back(cash[j+1]);

				cash[j+1] = cash[j];
				con = true;
			}
			else{
				for(int k = j+2; k<N; k++){
					cash[k] = old.back();
					old.pop_back();
				}
				old.clear();
				con = false;			
			} 
		}		
		
		if(con){						
			cash[j+1] = tmp; 
			con = false;
		}
		
	}	
	
	// output
	for (int i=0; i<S; i++){
		printf("%d ", cash[i]);
	}				
	
	return 0;
}

