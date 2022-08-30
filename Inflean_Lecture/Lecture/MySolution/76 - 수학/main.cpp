#include <iostream>
#include <vector>


using namespace std;



int main() {	
	
	int N,R;
	scanf("%d %d", &N, &R);
	
	int mo = 1;
	for(int i=N; i>=R; i--){
		mo = mo * i;
	}
	
	int ja = 1;
	for(int i=R;i>=1;i--){
		ja = ja * i;
	}
	
	printf("%d", mo/ja);
	
	return 0;
}

