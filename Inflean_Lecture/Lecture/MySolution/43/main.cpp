#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int N,M; // ��� ���̺갹��, ��ȭ ���� DVD���� 
int arr[1001];

bool Count(int mid){
	// �������� �� Ȯ�� 
	int tmpsum =0;
	int cnt = 0;
	bool isEnable = true;
	for(int i=0; i<N; i++){
		tmpsum += arr[i];
		// ������ 
		if(tmpsum <= mid){
			
			if ( i+1 >= N ) cnt++; // �������µ� ������ �ε��� 	 	
			else if(tmpsum + arr[i+1] > mid){
				cnt++;
				tmpsum = 0;	
			}
			 // M������ ���� ������ ��� false 
			if(cnt > M) isEnable = false;  
	
		}
		// �� ������
		else isEnable = false;
	}
	
	return isEnable;
}

int main() {

	int rt,lt,mid,cnt;
	int min;
	int sum = 0;
	// get input
	scanf("%d %d", &N ,&M);	
	for(int i=0; i<N; i++){
		scanf("%d", &arr[i] );
		sum += arr[i];
	}
	
	// binary search ( ���� �˰��� )
	// �����ؾ� �� �� = ������ �� (DVD����)
	lt = 1;
	rt = sum;
	
	while(lt <= rt){
		mid = (lt+rt)/2;
			
		bool isEnable = Count(mid);
				
		if( isEnable ){
			// ���� Ž��
			rt = mid - 1; 
			min = mid;
		}
		else{
			// ũ�� Ž��
			lt = mid + 1; 
		}		
	}
	 	
	// output
	printf("%d",min); 

	return 0;
}

