#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int N,C; // ������ ���� N, C���� �� 

int GetCount(int mid,vector<int> arr){
	// ���� ���� ���� 
	int cnt = 1; // �׳� ù��° �ڸ��� �ְ� ������ 	
	int posX = arr[0]; // ù��° �ڸ� ���� ��ġ 
	
	// ���� ������ ���ϸ� �Ÿ� Ȯ�� 
	for(int i=1; i<=N; i++){
		// �� ���� �Ÿ� �� ���ϱ� 
		if( arr[i] -  posX >= mid ){ // �� ���� �Ÿ����� mid���� �� ũ�ٸ� 
			cnt++; // ���� ���� 
			posX = arr[i]; // �� ���� �������� ��ȯ 
		}
		else { // �� ���� �Ÿ����� mid���� �۴ٸ� 
			// ���� ���� �� ����. ���� ���� ��������? 
		}
	}	
	
	return cnt;
} 

int main() {
		
	scanf("%d %d", &N, &C);
	
	vector<int> arr(N); // �������� ��ǥ 
	for(int i=0; i<N; i++){
		scanf("%d", &arr[i]);
	}
	
	// binary search
	sort(arr.begin(), arr.end());
	
	// �����ؾ� �� ���� = ���� ����� �� ���� �ִ�Ÿ� 
	int lt = 1, rt = arr[N-1] - arr[0];
	int mid;
	int max = -214000000;
	while(lt <= rt) {
		mid = (lt+rt)/2;
		
		int num = GetCount(mid, arr);
		
		// �� ��ġ ���� 
		if(num >= C){
			lt = mid +1;
			max = mid;
		}
		else{ // �� ��ġ �Ұ��� 
			rt = mid - 1;
		}
		
	}
	
	printf("%d", max);

	return 0;
}

