#include <iostream>


using namespace std;

int main() {
	
	int H,W;
	int max = -2147000000;
	int arr[51][51];
	int myH, myW;
	// input
	scanf("%d %d", &H, &W);
	for(int i=0; i<H; i++){
		for(int j=0; j<W; j++){
			scanf ("%d", &arr[i][j]);
		}
	}
	
	scanf("%d %d", &myH, &myW);
	
	// orange
	for(int i=0; i<(H-myH+1); i++){	
		for(int j=0; j < (W-myW+1); j++){
			int cnt = 0;
			// 영지에서 나온 오렌지 
			for(int k=0; k<myH; k++ ){
				for(int r=0; r<myW; r++){
					cnt += arr[i+k][j+r];
				}
			}		
			
			if(max < cnt){
				max = cnt;
			}
		}
	}
	

	// output
	printf("%d", max);

	return 0;
}

