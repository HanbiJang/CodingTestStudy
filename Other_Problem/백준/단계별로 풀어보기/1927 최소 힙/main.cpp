#include <iostream>
#include <vector>
#include <queue>

using namespace std;


int main(){
	
	//�ּ����� �̿��Ͽ� ������ ���� ������ �����ϴ� ���α׷��� �ۼ��ض�
	
	//�迭�� �ڿ��� x�� �ִ´�
	//�迭���� ���� ���� ���� ����ϰ�,
	//�� ���� �迭���� �����Ѵ�
	
	int n;
	cin>>n;
	
	priority_queue<int> pq; 
	
	for(int i=0; i<n; i++){
		int x;
		scanf("%d", &x);
		
		if(x==0){
			//�迭���� ���� ���� ���� ���
			//�迭���� ���� 
			//�迭�� ����ִٸ� 0�� ��� 
			if(pq.empty()){
				printf("0\n");
			}
			else{
				printf("%d\n", pq.top()*-1);
				pq.pop();
			}
		}
		else{
			pq.push(-1*x);
		}
	}

	return 0;
}

