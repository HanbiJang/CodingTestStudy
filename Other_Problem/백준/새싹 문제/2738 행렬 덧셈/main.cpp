#include <iostream>
#include <string>

using namespace std;

int A[101][101];

int main(){
	
	int N,M;
	cin>>N>>M;
	
	
	//��� A 
	for(int i=0; i<N; i++){
		for(int j=0; j<M; j++){
			cin>>A[i][j];
		}
	}

	//��� B 
	for(int i=0; i<N; i++){
		for(int j=0; j<M; j++){
			int b;
			cin>>b;
			A[i][j]+=b;	
		}
	}
	
	//A+B
	for(int i=0; i<N; i++){
		for(int j=0; j<M; j++){
			cout<<A[i][j]<<" ";
		}
		cout<<endl;
	}

	return 0;
}


