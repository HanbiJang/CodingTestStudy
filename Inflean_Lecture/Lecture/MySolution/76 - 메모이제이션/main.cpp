#include <iostream>
#include <vector>


using namespace std;

int arr[21][21];
int re(int n,int r){
	//�޸������̼�
	if(arr[n][r]>0) return arr[n][r];
	else{	
		if(n==r || r==0){
			return 1;
		}
		else{
			return re(n-1,r-1)+ re(n-1,r);//�������ǻ�, �Ȼ� ��� 2���� 
		}
	}
	
}

int main() {	
	
	int N,R;
	scanf("%d %d", &N, &R);
	
	int ans = re(N,R);	
	printf("%d", ans);
	
	return 0;
}

