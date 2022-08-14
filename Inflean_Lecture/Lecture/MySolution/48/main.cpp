#include <iostream>
#include <cmath>

using namespace std;

int main() {
			
	int arr[9][9];
	int average;
 	int minDis;
 	int ans;
 	
 	// input
 	for(int i=0; i<9; i++){ 							
 		for(int j=0; j<9; j++){
			scanf("%d", &arr[i][j]);	
		}	
	}
	
 	for(int i=0; i<9; i++){
 		
		int sum = 0;	
 		for(int j=0; j<9; j++){	
			sum += arr[i][j];
		}	
		
		// ��� ���ϱ� 
		float tmp  = (float)sum/9;
		if( tmp > (int) tmp 
		&& ( tmp - (int) tmp ) >= 0.5f ) tmp++;
		average = (int) tmp;
		
		
		// ���� ����� �� ã�� 
		minDis = 2147000000;
		for(int j=0; j<9; j++){
			
			int dis = abs(average - arr[i][j]);
			
			if( dis == minDis ){
				if ( arr[i][j] > ans ) ans = arr[i][j];					
			}
			else if ( dis < minDis ){
				ans = arr[i][j];
				minDis = dis;
			}
			
		}
		
		printf("%d %d\n", average, ans);	
	}
 	

	return 0;
}

