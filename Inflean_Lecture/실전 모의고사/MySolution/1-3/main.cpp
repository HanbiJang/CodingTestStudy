#include <iostream>
#include <vector>
#include <string>

using namespace std;

int main() {
	
	int N;
	int arr[100001];
	
	//input
	scanf("%d",&N);	
	for(int i=0; i<N; i++){
		cin>>arr[i];
	}
	
	//최초의 방해 학생
	printf("0 ");
	for(int i=1; i<N; i++){
		for(int j=i-1; j>=0; j--){
			if(arr[i]<arr[j]){

				printf("%d ",j+1);
				break;	
			}
			else if(j==0){
				printf("0 ");
			}
		}
	} 
	
	return 0;
}

