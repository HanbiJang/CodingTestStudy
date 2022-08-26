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
		
		MSort(lt,m); // ���� 
		MSort(m+1,rt);	// ������ 
		
		// ������ ���⼭ �ϸ� =>  ���� ��ȸ
		// lt���� rt���� �����ϱ� (���ĵ�) 
		int p1, p2, p3;
		p1 = lt; // �������� ���� 
		p2 = m + 1; // ���������� ���� 
		p3 = lt; // �պ��ϴ� �迭 ��� ����Ʈ 
		
		while(p1<=m && p2<=rt){
			if(arr[p1] < arr[p2])
				tmp[p3++] = arr[p1++];
			else{
				tmp[p3++] = arr[p2++];
			}
		} 
		while(p1<=m) tmp[p3++] = arr[p1++];
		while(p2<=rt) tmp[p3++] = arr[p2++];
		
		// ���� �迭�� �ݿ� 
		for(int i=lt; i<=rt; i++){
			arr[i] = tmp[i];
		}
		
		//�ּ� �պ� �迭 :2���̹Ƿ�
		//�������� �迭���� �պ��ϸ� ��������� �������� ���ĵ� 
		//�迭 2�� �պ� ���� : �������� �迭 2�� 
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

