#include <iostream>

using namespace std;


int main(){
	
	ios_base::sync_with_stdio(false);
	
	//abcdef	
	int arr[6];
	
	for(int i=0; i<6; i++){
		cin>>arr[i];
	}
	
	for(int x=-999; x<=999; x++){
		for(int y=-999; y<=999; y++){
			
			if(arr[0]*x + arr[1]*y == arr[2] && 
			arr[3]*x + arr[4]*y == arr[5]){
				cout<<x<<" "<<y;
				break;
			}
			
		}
		
	}
		
	return 0;
}

