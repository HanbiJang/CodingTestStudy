#include <iostream>
#include <vector>

using namespace std;

int main(){
	
	//������ȹ�� 
	//�ִ� ���� ���϶�
	int n;
	cin>>n;
	
	vector< vector<int> > arr(n+1, vector<int>(n+1,0) ); //n+1 x n+1 �迭
	
	//���� �ޱ�
	int col = 0;
	for(int i=1; i<=n; i++){
		col++;
		for(int j=1; j<=col; j++){
			int a;
			cin>>a;
			
			arr[i][j]=a;
			
			//�� ū�ɷ� �� ����
			arr[i][j] += (arr[i-1][j-1]<arr[i-1][j]?arr[i-1][j]:arr[i-1][j-1]); 
		}
	}	 
	
	int max=-2147000000;
	//�ִ밪 ã��
	for(int i=1; i<=n; i++){
		if(max < arr[n][i]) max= arr[n][i];
	} 
	cout<<max;
	
	return 0;
}

