#include <iostream>
#include <vector>

using namespace std;

int f[50];
int main() {
	int N;
	scanf("%d",&N);
	
	//동적계획법 
	f[1]=1;
	f[2]=2;
	
	for(int i=3; i<=N; i++){
		f[i]=f[i-1]+f[i-2];
	}
	
	printf("%d",f[N]);
	
	return 0;
}
