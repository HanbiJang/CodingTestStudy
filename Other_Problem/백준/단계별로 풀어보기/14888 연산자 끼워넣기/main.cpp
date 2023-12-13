#include <iostream>
#include <vector>

using namespace std;

int N;

int minA=2147000000;
int maxA=-2147000000;

vector<int> tmp; //+, -, *, /
vector<int> op_tmp; //op�� ������ ī��Ʈ 

void BackTR(int n, vector<int> &arr, vector<int> &op){
	
	if(n==N-1){
		int res = arr[0]; //ù�� 
		//�����
		
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
 
		//����
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
				//�����ϱ� 			
				tmp[n]=i; //tmp�� ����	
				op_tmp[i]--; //op �� ����

				BackTR(n+1, arr, op);

				tmp[n]=-1; //tmp���� ����
				op_tmp[i]++; //op �� ���� 
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
	
	//N���� �� ����
	//N-1���� ������
	
	cin>>N;
	
	vector<int> arr; //�� ���� 
	for(int i=0; i<N; i++){
		int a;
		cin>>a;
		
		arr.push_back(a);
	}
	
	vector<int> op; //������ ���� 
	for(int i=0; i<4; i++){
		//������ ����, ������ ����, ������ ����, �������� ����
		int a;
		cin>>a;
		
		op.push_back(a);
	}
	
	init(op);
	
	BackTR(0,arr,op);
	cout<<maxA<<"\n"<<minA;
	
	return 0;
}

