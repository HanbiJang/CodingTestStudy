#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int arr[1001]; //input

int main() {
	
	int N;	
	vector<int> ans(1001,0); //�� �ε����� �ش��ϴ� ���� ���������� ���� ������ �ִ� ���� 

	//input
	scanf("%d",&N);	
	for(int i=1; i<=N; i++){
		scanf("%d", &arr[i]);
	}	
	
	ans[1]=1; 
	for(int i=2; i<=N; i++){
		//���� ���̽����� ���� ���� �۰� ���� ���̰� ū ���� ã�Ƴ� 
		int max_=0; //�����̹Ƿ� 0���� �ּҰ� �ֵ� �� 
		for(int j=1; j<=i-1; j++){
			if ((max_ < ans[j])&& (arr[i] > arr[j])){
				max_ = ans[j];
			}			
		}
		
		ans[i] = max_+1;
		
	}

	
	//output
	printf("%d", *max_element(ans.begin(), ans.end())); //�ִ밪 ã�� 
	
	return 0;
}
