#include <iostream>
#include <vector>

using namespace std;

int N;

int minA=2147000000;
int maxA=-2147000000;

vector<int> tmp; //+, -, *, /
vector<int> op_tmp; //op에 남은수 카운트 

void BackTR(int n, vector<int> &arr, vector<int> &op){
	
	if(n==N-1){
		int res = arr[0]; //첫수 
		//값계산
		
		for(int i=1; i<=N-1; i++){
			if(tmp[i-1]==0){ //+
				res += arr[i];
			}
			else if(tmp[i-1]==1){ //-
				res -= arr[i];
			}
			else if(tmp[i-1]==2){ //*
				res *= arr[i];
			}
			else if(tmp[i-1]==3){ // / 
				res /= arr[i];
			}
		}
 
		//값비교
		if(maxA<res){
			maxA = res;
		}	 
		if(minA>res){
			minA = res;
		}
		
		return;
	}
	
	else{
		for(int i=0; i<4; i++){
			if(op_tmp[i]>0){
				//선택하기 			
				tmp[n]=i; //tmp에 저장	
				op_tmp[i]--; //op 수 차감

				BackTR(n+1, arr, op);

				tmp[n]=-1; //tmp에서 삭제
				op_tmp[i]++; //op 수 복구 
			}			
		}
	}
	
}

void init(vector<int> &op){
	for(int i=0; i<N-1; i++){
		tmp.push_back(-1);
	}
	for(int i=0; i<4; i++){
		op_tmp.push_back(op[i]);
	}
	
} 

int main(){
	
	//N개의 수 수열
	//N-1개의 연산자
	
	cin>>N;
	
	vector<int> arr; //수 모음 
	for(int i=0; i<N; i++){
		int a;
		cin>>a;
		
		arr.push_back(a);
	}
	
	vector<int> op; //연산자 모음 
	for(int i=0; i<4; i++){
		//덧셈의 개수, 뺄셈의 개수, 곱셈의 개수, 나눗셈의 개수
		int a;
		cin>>a;
		
		op.push_back(a);
	}
	
	init(op);
	
	BackTR(0,arr,op);
	cout<<maxA<<"\n"<<minA;
	
	return 0;
}

