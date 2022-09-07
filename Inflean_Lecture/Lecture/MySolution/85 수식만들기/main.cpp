#include <iostream>
#include <vector>

using namespace std;

int sum;
int max_ = -2147000000;
int min_ = 2147000000;

int N;
int arr[11];
int oper[4]; //+ - * / ������ ������ ������ �迭 

void re(int n){
	if(n==N){
		//���ʿ� �����ڸ� n-1�� �� �� ���̶� �� ����� Ȯ�� �ʿ� X 
		if(max_<sum) max_=sum;
		if(min_>sum) min_=sum;
		
		return;
	}
	
	else{

		for(int i=0; i<4; i++){ //������ 4�� �ݺ�				
			if(oper[i]>0){ //������ �ִ� ��� 
				int oldSum = sum;
				oper[i]--;
				//��� 
				switch(i){
					case 0: //+
						sum+=arr[n];
						break;
					case 1: //-
						sum-=arr[n];
						break;
					case 2: //*
						sum*=arr[n];
						break;
					case 3: // /
						sum/=arr[n];
						break;
				}
				//��� 
				re(n+1);
				
				//���
				oper[i]++;
				sum = oldSum; 
			}						 
		}			
		
	}
}


int main() {
	
	//input
	scanf("%d", &N);
	for(int i=0; i<N;i++){
		scanf("%d", &arr[i]);
	}
	for(int i=0; i<4; i++){
		scanf("%d",&oper[i]);
	}	
	 
	sum+=arr[0]; //ó�� ���� 
	ch[0] = 1; //�湮
	re(1);
	
	printf("%d\n%d", max_,min_);
	
	return 0;
}
