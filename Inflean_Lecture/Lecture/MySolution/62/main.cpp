#include <iostream>
#include <vector>

using namespace std;

int N; 
int arr[11];
int tmp[11];

void MSort(int lt, int rt){
	
	if(lt>=rt){		
		return ;
	}
	else{	
		int m = (lt+rt)/2;
		
		MSort(lt,m); // 왼쪽 
		MSort(m+1,rt);	// 오른쪽 
		
		// 연산을 여기서 하면 =>  후위 순회
		// lt부터 rt까지 병합하기 (정렬됨) 
		int p1, p2, p3;
		p1 = lt; // 왼쪽으로 진행 
		p2 = m + 1; // 오른쪽으로 진행 
		p3 = lt; // 합병하는 배열 결과 포인트 
		
		while(p1<=m && p2<=rt){
			if(arr[p1] < arr[p2])
				tmp[p3++] = arr[p1++];
			else{
				tmp[p3++] = arr[p2++];
			}
		} 
		while(p1<=m) tmp[p3++] = arr[p1++];
		while(p2<=rt) tmp[p3++] = arr[p2++];
		
		// 실제 배열에 반영 
		for(int i=lt; i<=rt; i++){
			arr[i] = tmp[i];
		}
		
		//최소 합병 배열 :2개이므로
		//오름차순 배열끼리 합병하면 결과적으로 오름차순 정렬됨 
		//배열 2개 합병 전제 : 오름차순 배열 2개 
	}
	
}

int main() {
	
	scanf("%d", &N);
	for(int i=1; i<=N; i++){
		scanf("%d",&arr[i]);
	}
	
	MSort(1, N); // sort
	
	// output
	for(int i=1; i<=N; i++){
		printf("%d ", arr[i] );
	}

	return 0;
}

